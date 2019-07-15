/*
 *  Copyright (c) 2016, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file includes default compile-time configuration constants
 *   for OpenThread.
 */

#ifndef OPENTHREAD_CORE_DEFAULT_CONFIG_H_
#define OPENTHREAD_CORE_DEFAULT_CONFIG_H_

/**
 * @def OPENTHREAD_CONFIG_STACK_VENDOR_OUI
 *
 * The Organizationally Unique Identifier for the Thread stack.
 *
 */
#ifndef OPENTHREAD_CONFIG_STACK_VENDOR_OUI
#define OPENTHREAD_CONFIG_STACK_VENDOR_OUI 0x18b430
#endif

/**
 * @def OPENTHREAD_CONFIG_STACK_VERSION_REV
 *
 * The Stack Version Revision for the Thread stack.
 *
 */
#ifndef OPENTHREAD_CONFIG_STACK_VERSION_REV
#define OPENTHREAD_CONFIG_STACK_VERSION_REV 0
#endif

/**
 * @def OPENTHREAD_CONFIG_STACK_VERSION_MAJOR
 *
 * The Stack Version Major for the Thread stack.
 *
 */
#ifndef OPENTHREAD_CONFIG_STACK_VERSION_MAJOR
#define OPENTHREAD_CONFIG_STACK_VERSION_MAJOR 0
#endif

/**
 * @def OPENTHREAD_CONFIG_STACK_VERSION_MINOR
 *
 * The Stack Version Minor for the Thread stack.
 *
 */
#ifndef OPENTHREAD_CONFIG_STACK_VERSION_MINOR
#define OPENTHREAD_CONFIG_STACK_VERSION_MINOR 1
#endif

/**
 * @def OPENTHREAD_CONFIG_PLATFORM_INFO
 *
 * The platform-specific string to insert into the OpenThread version string.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_INFO
#define OPENTHREAD_CONFIG_PLATFORM_INFO "NONE"
#endif

/**
 * @def OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS
 *
 * The number of message buffers in the buffer pool.
 *
 */
#ifndef OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS
#define OPENTHREAD_CONFIG_NUM_MESSAGE_BUFFERS 44
#endif

/**
 * @def OPENTHREAD_CONFIG_MESSAGE_BUFFER_SIZE
 *
 * The size of a message buffer in bytes.
 *
 */
#ifndef OPENTHREAD_CONFIG_MESSAGE_BUFFER_SIZE
#define OPENTHREAD_CONFIG_MESSAGE_BUFFER_SIZE 128
#endif

/**
 * @def OPENTHREAD_CONFIG_DEFAULT_TRANSMIT_POWER
 *
 * The default IEEE 802.15.4 transmit power (dBm).
 *
 */
#ifndef OPENTHREAD_CONFIG_DEFAULT_TRANSMIT_POWER
#define OPENTHREAD_CONFIG_DEFAULT_TRANSMIT_POWER 0
#endif

/**
 * @def OPENTHREAD_CONFIG_DROP_MESSAGE_ON_FRAGMENT_TX_FAILURE
 *
 * Define as 1 for OpenThread to drop a message (and not send any remaining fragments of the message) if all transmit
 * attempts fail for a fragment of the message. For a direct transmission, a failure occurs after all MAC transmission
 * attempts for a given fragment are unsuccessful. For an indirect transmission, a failure occurs after all data poll
 * triggered transmission attempts for a given fragment fail.
 *
 * If set to zero (disabled), OpenThread will attempt to send subsequent fragments, whether or not all transmission
 * attempts fail for a given fragment.
 *
 */
#ifndef OPENTHREAD_CONFIG_DROP_MESSAGE_ON_FRAGMENT_TX_FAILURE
#define OPENTHREAD_CONFIG_DROP_MESSAGE_ON_FRAGMENT_TX_FAILURE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_ADDRESS_CACHE_ENTRIES
 *
 * The number of EID-to-RLOC cache entries.
 *
 */
#ifndef OPENTHREAD_CONFIG_ADDRESS_CACHE_ENTRIES
#define OPENTHREAD_CONFIG_ADDRESS_CACHE_ENTRIES 10
#endif

/**
 * @def OPENTHREAD_CONFIG_ADDRESS_QUERY_TIMEOUT
 *
 * The timeout value (in seconds) waiting for a address notification response after sending an address query.
 *
 * Default: 3 seconds
 *
 */
#ifndef OPENTHREAD_CONFIG_ADDRESS_QUERY_TIMEOUT
#define OPENTHREAD_CONFIG_ADDRESS_QUERY_TIMEOUT 3
#endif

/**
 * @def OPENTHREAD_CONFIG_ADDRESS_QUERY_INITIAL_RETRY_DELAY
 *
 * Initial retry delay for address query (in seconds).
 *
 * Default: 15 seconds
 *
 */
#ifndef OPENTHREAD_CONFIG_ADDRESS_QUERY_INITIAL_RETRY_DELAY
#define OPENTHREAD_CONFIG_ADDRESS_QUERY_INITIAL_RETRY_DELAY 15
#endif

/**
 * @def OPENTHREAD_CONFIG_ADDRESS_QUERY_MAX_RETRY_DELAY
 *
 * Maximum retry delay for address query (in seconds).
 *
 * Default: 28800 seconds (480 minutes or 8 hours)
 *
 */
#ifndef OPENTHREAD_CONFIG_ADDRESS_QUERY_MAX_RETRY_DELAY
#define OPENTHREAD_CONFIG_ADDRESS_QUERY_MAX_RETRY_DELAY 28800
#endif

/**
 * @def OPENTHREAD_CONFIG_MAX_ROUTERS
 *
 * The maximum number of routers in a Thread network.
 *
 * @note Thread specifies this value to be 32.  Changing this value may cause interoperability issues with standard
 *       Thread 1.1 devices.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAX_ROUTERS
#define OPENTHREAD_CONFIG_MAX_ROUTERS 32
#endif

/**
 * @def OPENTHREAD_CONFIG_MAX_CHILDREN
 *
 * The maximum number of children.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAX_CHILDREN
#define OPENTHREAD_CONFIG_MAX_CHILDREN 10
#endif

/**
 * @def OPENTHREAD_CONFIG_DEFAULT_CHILD_TIMEOUT
 *
 * The default child timeout value (in seconds).
 *
 */
#ifndef OPENTHREAD_CONFIG_DEFAULT_CHILD_TIMEOUT
#define OPENTHREAD_CONFIG_DEFAULT_CHILD_TIMEOUT 240
#endif

/**
 * @def OPENTHREAD_CONFIG_IP_ADDRS_PER_CHILD
 *
 * The maximum number of supported IPv6 address registrations per child.
 *
 */
#ifndef OPENTHREAD_CONFIG_IP_ADDRS_PER_CHILD
#define OPENTHREAD_CONFIG_IP_ADDRS_PER_CHILD 4
#endif

/**
 * @def OPENTHREAD_CONFIG_IP_ADDRS_TO_REGISTER
 *
 * The maximum number of IPv6 address registrations for MTD.
 *
 */
#ifndef OPENTHREAD_CONFIG_IP_ADDRS_TO_REGISTER
#define OPENTHREAD_CONFIG_IP_ADDRS_TO_REGISTER (OPENTHREAD_CONFIG_IP_ADDRS_PER_CHILD)
#endif

/**
 * @def OPENTHREAD_CONFIG_MAX_SERVICE_ALOCS
 *
 * The maximum number of supported Service ALOCs registrations for this device.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAX_SERVICE_ALOCS
#define OPENTHREAD_CONFIG_MAX_SERVICE_ALOCS 1
#endif

/**
 * @def OPENTHREAD_CONFIG_6LOWPAN_REASSEMBLY_TIMEOUT
 *
 * The reassembly timeout between 6LoWPAN fragments in seconds.
 *
 */
#ifndef OPENTHREAD_CONFIG_6LOWPAN_REASSEMBLY_TIMEOUT
#define OPENTHREAD_CONFIG_6LOWPAN_REASSEMBLY_TIMEOUT 2
#endif

/**
 * @def OPENTHREAD_CONFIG_JOINER_UDP_PORT
 *
 * The default Joiner UDP port.
 *
 */
#ifndef OPENTHREAD_CONFIG_JOINER_UDP_PORT
#define OPENTHREAD_CONFIG_JOINER_UDP_PORT 1000
#endif

/**
 * @def OPENTHREAD_CONFIG_MAX_ENERGY_RESULTS
 *
 * The maximum number of Energy List entries.
 *
 */
#ifndef OPENTHREAD_CONFIG_MAX_ENERGY_RESULTS
#define OPENTHREAD_CONFIG_MAX_ENERGY_RESULTS 64
#endif

/**
 * @def OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS
 *
 * The maximum number of state-changed callback handlers (set using `otSetStateChangedCallback()`).
 *
 */
#ifndef OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS
#define OPENTHREAD_CONFIG_MAX_STATECHANGE_HANDLERS 1
#endif

/**
 * @def OPENTHREAD_CONFIG_SNTP_RESPONSE_TIMEOUT
 *
 * Maximum time that SNTP Client waits for response in milliseconds.
 *
 */
#ifndef OPENTHREAD_CONFIG_SNTP_RESPONSE_TIMEOUT
#define OPENTHREAD_CONFIG_SNTP_RESPONSE_TIMEOUT 3000
#endif

/**
 * @def OPENTHREAD_CONFIG_SNTP_MAX_RETRANSMIT
 *
 * Maximum number of retransmissions for SNTP client.
 *
 */
#ifndef OPENTHREAD_CONFIG_SNTP_MAX_RETRANSMIT
#define OPENTHREAD_CONFIG_SNTP_MAX_RETRANSMIT 2
#endif

/**
 * @def OPENTHREAD_CONFIG_PLATFORM_MESSAGE_MANAGEMENT
 *
 * The message pool is managed by platform defined logic when this flag is set.
 * This feature would typically be used when operating in a multi-threaded system
 * and multiple threads need to access the message pool.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_MESSAGE_MANAGEMENT
#define OPENTHREAD_CONFIG_PLATFORM_MESSAGE_MANAGEMENT 0
#endif

/**
 * @def OPENTHREAD_CONFIG_STORE_FRAME_COUNTER_AHEAD
 *
 * The value ahead of the current frame counter for persistent storage.
 *
 */
#ifndef OPENTHREAD_CONFIG_STORE_FRAME_COUNTER_AHEAD
#define OPENTHREAD_CONFIG_STORE_FRAME_COUNTER_AHEAD 1000
#endif

/**
 * @def OPENTHREAD_CONFIG_MESHCOP_PENDING_DATASET_MINIMUM_DELAY
 *
 * Minimum Delay Timer value for a Pending Operational Dataset (in ms).
 *
 * Thread specification defines this value as 30,000 ms. Changing from the specified value should be done for testing
 * only.
 *
 */
#ifndef OPENTHREAD_CONFIG_MESHCOP_PENDING_DATASET_MINIMUM_DELAY
#define OPENTHREAD_CONFIG_MESHCOP_PENDING_DATASET_MINIMUM_DELAY 30000
#endif

/**
 * @def OPENTHREAD_CONFIG_MESHCOP_PENDING_DATASET_DEFAULT_DELAY
 *
 * Default Delay Timer value for a Pending Operational Dataset (in ms).
 *
 * Thread specification defines this value as 300,000 ms. Changing from the specified value should be done for testing
 * only.
 *
 */
#ifndef OPENTHREAD_CONFIG_MESHCOP_PENDING_DATASET_DEFAULT_DELAY
#define OPENTHREAD_CONFIG_MESHCOP_PENDING_DATASET_DEFAULT_DELAY 300000
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS
 *
 * Define as 1 to enable bultin-mbedtls.
 *
 * Note that the OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS determines whether to use bultin-mbedtls as well as
 * whether to manage mbedTLS internally, such as memory allocation and debug.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS
#define OPENTHREAD_CONFIG_ENABLE_BUILTIN_MBEDTLS 1
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE
 *
 * The size of NCP message buffer in bytes.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE
#define OPENTHREAD_CONFIG_NCP_TX_BUFFER_SIZE 512
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_UART_TX_CHUNK_SIZE
 *
 * The size of NCP UART TX chunk in bytes.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_UART_TX_CHUNK_SIZE
#define OPENTHREAD_CONFIG_NCP_UART_TX_CHUNK_SIZE 128
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_UART_RX_BUFFER_SIZE
 *
 * The size of NCP UART RX buffer in bytes.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_UART_RX_BUFFER_SIZE
#if OPENTHREAD_RADIO
#define OPENTHREAD_CONFIG_NCP_UART_RX_BUFFER_SIZE 512
#else
#define OPENTHREAD_CONFIG_NCP_UART_RX_BUFFER_SIZE 1300
#endif
#endif // OPENTHREAD_CONFIG_NCP_UART_RX_BUFFER_SIZE

/**
 * @def OPENTHREAD_CONFIG_NCP_SPI_BUFFER_SIZE
 *
 * The size of NCP SPI (RX/TX) buffer in bytes.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_SPI_BUFFER_SIZE
#if OPENTHREAD_RADIO
#define OPENTHREAD_CONFIG_NCP_SPI_BUFFER_SIZE 512
#else
#define OPENTHREAD_CONFIG_NCP_SPI_BUFFER_SIZE 1300
#endif
#endif // OPENTHREAD_CONFIG_NCP_SPI_BUFFER_SIZE

/**
 * @def OPENTHREAD_CONFIG_NCP_SPINEL_ENCRYPTER_EXTRA_DATA_SIZE
 *
 * The size of extra data to be allocated in UART buffer,
 * needed by NCP Spinel Encrypter.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_SPINEL_ENCRYPTER_EXTRA_DATA_SIZE
#define OPENTHREAD_CONFIG_NCP_SPINEL_ENCRYPTER_EXTRA_DATA_SIZE 0
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_SPINEL_LOG_MAX_SIZE
 *
 * The maximum OpenThread log string size (number of chars) supported by NCP using Spinel `StreamWrite`.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_SPINEL_LOG_MAX_SIZE
#define OPENTHREAD_CONFIG_NCP_SPINEL_LOG_MAX_SIZE 150
#endif

/**
 * @def OPENTHREAD_CONFIG_PLATFORM_ASSERT_MANAGEMENT
 *
 * The assert is managed by platform defined logic when this flag is set.
 *
 */
#ifndef OPENTHREAD_CONFIG_PLATFORM_ASSERT_MANAGEMENT
#define OPENTHREAD_CONFIG_PLATFORM_ASSERT_MANAGEMENT 0
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_PLATFORM_USEC_TIMER
 *
 * Define to 1 if you want to enable microsecond backoff timer implemented in platform.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_PLATFORM_USEC_TIMER
#define OPENTHREAD_CONFIG_ENABLE_PLATFORM_USEC_TIMER 0
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_PLATFORM_EUI64_CUSTOM_SOURCE
 *
 * Allows to define custom otPlatRadioGetIeeeEui64 function to retrieve EUI-64.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_PLATFORM_EUI64_CUSTOM_SOURCE
#define OPENTHREAD_CONFIG_ENABLE_PLATFORM_EUI64_CUSTOM_SOURCE 0
#endif

/**
 * @def OPENTHREAD_CONFIG_HEAP_SIZE
 *
 * The size of heap buffer when DTLS is enabled.
 *
 */
#ifndef OPENTHREAD_CONFIG_HEAP_SIZE
#if OPENTHREAD_CONFIG_COAP_SECURE_API_ENABLE
#define OPENTHREAD_CONFIG_HEAP_SIZE (3072 * sizeof(void *))
#else
#define OPENTHREAD_CONFIG_HEAP_SIZE (1536 * sizeof(void *))
#endif
#endif

/**
 * @def OPENTHREAD_CONFIG_HEAP_SIZE_NO_DTLS
 *
 * The size of heap buffer when DTLS is disabled.
 *
 */
#ifndef OPENTHREAD_CONFIG_HEAP_SIZE_NO_DTLS
#define OPENTHREAD_CONFIG_HEAP_SIZE_NO_DTLS 384
#endif

/**
 * @def OPENTHREAD_CONFIG_DTLS_APPLICATION_DATA_MAX_LENGTH
 *
 * The size of dtls application data when the CoAP Secure API is enabled.
 *
 */
#ifndef OPENTHREAD_CONFIG_DTLS_APPLICATION_DATA_MAX_LENGTH
#define OPENTHREAD_CONFIG_DTLS_APPLICATION_DATA_MAX_LENGTH 1400
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_STEERING_DATA_SET_OOB
 *
 * Enable setting steering data out of band.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_STEERING_DATA_SET_OOB
#define OPENTHREAD_CONFIG_ENABLE_STEERING_DATA_SET_OOB 0
#endif

/**
 * @def OPENTHREAD_CONFIG_INFORM_PREVIOUS_PARENT_ON_REATTACH
 *
 * Define as 1 for a child to inform its previous parent when it attaches to a new parent.
 *
 * If this feature is enabled, when a device attaches to a new parent, it will send an IP message (with empty payload
 * and mesh-local IP address as the source address) to its previous parent.
 *
 */
#ifndef OPENTHREAD_CONFIG_INFORM_PREVIOUS_PARENT_ON_REATTACH
#define OPENTHREAD_CONFIG_INFORM_PREVIOUS_PARENT_ON_REATTACH 0
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_PERIODIC_PARENT_SEARCH
 *
 * Define as 1 to enable periodic parent search feature.
 *
 * When this feature is enabled an end-device/child (while staying attached) will periodically search for a possible
 * better parent and will switch parent if a better one is found.
 *
 * The child will periodically check the average RSS value for the current parent, and only if it is below a specific
 * threshold, a parent search is performed. The `OPENTHREAD_CONFIG_PARENT_SEARCH_CHECK_INTERVAL` specifies the
 * check interval (in seconds) and `OPENTHREAD_CONFIG_PARENT_SEARCH_RSS_THRESHOLD` gives the RSS threshold.
 *
 * Since the parent search process can be power consuming (child needs to stays in RX mode to collect parent response)
 * and to limit its impact on battery-powered devices, after a parent search is triggered, the child will not trigger
 * another one before a specified backoff interval specified by `OPENTHREAD_CONFIG_PARENT_SEARCH_BACKOFF_INTERVAL`.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_PERIODIC_PARENT_SEARCH
#define OPENTHREAD_CONFIG_ENABLE_PERIODIC_PARENT_SEARCH 0
#endif

/**
 * @def OPENTHREAD_CONFIG_PARENT_SEARCH_CHECK_INTERVAL
 *
 * Specifies the interval in seconds for a child to check the trigger condition to perform a parent search.
 *
 * Applicable only if periodic parent search feature is enabled (see `OPENTHREAD_CONFIG_ENABLE_PERIODIC_PARENT_SEARCH`).
 *
 */
#ifndef OPENTHREAD_CONFIG_PARENT_SEARCH_CHECK_INTERVAL
#define OPENTHREAD_CONFIG_PARENT_SEARCH_CHECK_INTERVAL (9 * 60)
#endif

/**
 * @def OPENTHREAD_CONFIG_PARENT_SEARCH_BACKOFF_INTERVAL
 *
 * Specifies the backoff interval in seconds for a child to not perform a parent search after triggering one.
 *
 * Applicable only if periodic parent search feature is enabled (see `OPENTHREAD_CONFIG_ENABLE_PERIODIC_PARENT_SEARCH`).
 *
 *
 */
#ifndef OPENTHREAD_CONFIG_PARENT_SEARCH_BACKOFF_INTERVAL
#define OPENTHREAD_CONFIG_PARENT_SEARCH_BACKOFF_INTERVAL (10 * 60 * 60)
#endif

/**
 * @def OPENTHREAD_CONFIG_PARENT_SEARCH_RSS_THRESHOLD
 *
 * Specifies the RSS threshold used to trigger a parent search.
 *
 * Applicable only if periodic parent search feature is enabled (see `OPENTHREAD_CONFIG_ENABLE_PERIODIC_PARENT_SEARCH`).
 *
 */
#ifndef OPENTHREAD_CONFIG_PARENT_SEARCH_RSS_THRESHOLD
#define OPENTHREAD_CONFIG_PARENT_SEARCH_RSS_THRESHOLD -65
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF
 *
 * Define as 1 to enable attach backoff feature
 *
 * When this feature is enabled, an exponentially increasing backoff wait time is added between attach attempts.
 * If device is sleepy, the radio will be put to sleep during the wait time. This ensures that a battery-powered sleepy
 * end-device does not drain its battery by continuously searching for a parent to attach to (when there is no
 * router/parent for it to attach).
 *
 * The backoff time starts from a minimum interval specified by `OPENTHREAD_CONFIG_ATTACH_BACKOFF_MINIMUM_INTERVAL`,
 * and every attach attempt the wait time is doubled up to `OPENTHREAD_CONFIG_ATTACH_BACKOFF_MAXIMUM_INTERVAL` which
 * specifies the maximum wait time.
 *
 * Once the wait time reaches the maximum, a random jitter interval is added to it. The maximum value for jitter is
 * specified by `OPENTHREAD_CONFIG_ATTACH_BACKOFF_JITTER_INTERVAL`. The random jitter is selected uniformly within
 * range `[-JITTER, +JITTER]`. It is only added when the backoff wait interval is at maximum value.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF
#define OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF 1
#endif

/**
 * @def OPENTHREAD_CONFIG_ATTACH_BACKOFF_MINIMUM_INTERVAL
 *
 * Specifies the minimum backoff wait interval (in milliseconds) used by attach backoff feature.
 *
 * Applicable only if attach backoff feature is enabled (see `OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF`).
 *
 * Please see `OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF` description for more details.
 *
 */
#ifndef OPENTHREAD_CONFIG_ATTACH_BACKOFF_MINIMUM_INTERVAL
#define OPENTHREAD_CONFIG_ATTACH_BACKOFF_MINIMUM_INTERVAL 251
#endif

/**
 * @def OPENTHREAD_CONFIG_ATTACH_BACKOFF_MAXIMUM_INTERVAL
 *
 * Specifies the maximum backoff wait interval (in milliseconds) used by attach backoff feature.
 *
 * Applicable only if attach backoff feature is enabled (see `OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF`).
 *
 * Please see `OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF` description for more details.
 *
 */
#ifndef OPENTHREAD_CONFIG_ATTACH_BACKOFF_MAXIMUM_INTERVAL
#define OPENTHREAD_CONFIG_ATTACH_BACKOFF_MAXIMUM_INTERVAL 1200000 // 1200 seconds = 20 minutes
#endif

/**
 * @def OPENTHREAD_CONFIG_ATTACH_BACKOFF_JITTER_INTERVAL
 *
 * Specifies the maximum jitter interval (in milliseconds) used by attach backoff feature.
 *
 * Applicable only if attach backoff feature is enabled (see `OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF`).
 *
 * Please see `OPENTHREAD_CONFIG_ENABLE_ATTACH_BACKOFF` description for more details.
 *
 */
#ifndef OPENTHREAD_CONFIG_ATTACH_BACKOFF_JITTER_INTERVAL
#define OPENTHREAD_CONFIG_ATTACH_BACKOFF_JITTER_INTERVAL 2000
#endif

/**
 * @def OPENTHREAD_CONFIG_SEND_UNICAST_ANNOUNCE_RESPONSE
 *
 * Define as 1 to enable sending of a unicast MLE Announce message in response to a received Announce message from
 * a device.
 *
 * @note The unicast MLE announce message is sent in addition to (and after) the multicast MLE Announce.
 *
 */
#ifndef OPENTHREAD_CONFIG_SEND_UNICAST_ANNOUNCE_RESPONSE
#define OPENTHREAD_CONFIG_SEND_UNICAST_ANNOUNCE_RESPONSE 1
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_ENABLE_PEEK_POKE
 *
 * Define as 1 to enable peek/poke functionality on NCP.
 *
 * Peek/Poke allows the host to read/write to memory addresses on NCP. This is intended for debugging.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_ENABLE_PEEK_POKE
#define OPENTHREAD_CONFIG_NCP_ENABLE_PEEK_POKE 0
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_SPINEL_RESPONSE_QUEUE_SIZE
 *
 * Size of NCP Spinel command response queue.
 *
 * NCP guarantees that it can respond up to `OPENTHREAD_CONFIG_NCP_SPINEL_RESPONSE_QUEUE_SIZE` spinel commands at the
 * same time. The spinel protocol defines a Transaction ID (TID) as part of spinel command frame (the TID can be
 * a value 0-15 where TID 0 is used for frames which require no response). Spinel protocol can support at most support
 * 15 simultaneous commands.
 *
 * The host driver implementation may further limit the number of simultaneous Spinel command frames (e.g., wpantund
 * limits this to two). This configuration option can be used to reduce the response queue size.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_SPINEL_RESPONSE_QUEUE_SIZE
#define OPENTHREAD_CONFIG_NCP_SPINEL_RESPONSE_QUEUE_SIZE 15
#endif

/**
 * @def OPENTHREAD_CONFIG_NCP_ENABLE_MCU_POWER_STATE_CONTROL
 *
 * Define to 1 to enable support controlling of desired power state of NCP's micro-controller.
 *
 * The power state specifies the desired power state of NCP's micro-controller (MCU) when the underlying platform's
 * operating system enters idle mode (i.e., all active tasks/events are processed and the MCU can potentially enter a
 * energy-saving power state).
 *
 * The power state primarily determines how the host should interact with the NCP and whether the host needs an
 * external trigger (a "poke") before it can communicate with the NCP or not.
 *
 * When enabled, the platform is expected to provide `otPlatSetMcuPowerState()` and `otPlatGetMcuPowerState()`
 * functions (please see `openthread/platform/misc.h`). Host can then control the power state using
 * `SPINEL_PROP_MCU_POWER_STATE`.
 *
 */
#ifndef OPENTHREAD_CONFIG_NCP_ENABLE_MCU_POWER_STATE_CONTROL
#define OPENTHREAD_CONFIG_NCP_ENABLE_MCU_POWER_STATE_CONTROL 0
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_SEND_LINK_REQUEST_ON_ADV_TIMEOUT
 *
 * Define to 1 to send an MLE Link Request when MAX_NEIGHBOR_AGE is reached for a neighboring router.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_SEND_LINK_REQUEST_ON_ADV_TIMEOUT
#define OPENTHREAD_CONFIG_MLE_SEND_LINK_REQUEST_ON_ADV_TIMEOUT 0
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_LINK_REQUEST_MARGIN_MIN
 *
 * Specifies the minimum link margin in dBm required before attempting to establish a link with a neighboring router.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_LINK_REQUEST_MARGIN_MIN
#define OPENTHREAD_CONFIG_MLE_LINK_REQUEST_MARGIN_MIN 10
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_PARTITION_MERGE_MARGIN_MIN
 *
 * Specifies the minimum link margin in dBm required before attempting to merge to a different partition.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_PARTITION_MERGE_MARGIN_MIN
#define OPENTHREAD_CONFIG_MLE_PARTITION_MERGE_MARGIN_MIN 10
#endif

/**
 * @def OPENTHREAD_CONFIG_MLE_CHILD_ROUTER_LINKS
 *
 * Specifies the desired number of router links that a REED / FED attempts to maintain.
 *
 */
#ifndef OPENTHREAD_CONFIG_MLE_CHILD_ROUTER_LINKS
#define OPENTHREAD_CONFIG_MLE_CHILD_ROUTER_LINKS 3
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_DEBUG_UART
 *
 * Enable the "Debug Uart" platform feature.
 *
 * In the embedded world, the CLI application uses a UART as a console
 * and the NCP application can be configured to use either a UART or
 * a SPI type device to transfer data to the host.
 *
 * The Debug UART is or requires a second uart on the platform.
 *
 * The Debug Uart has two uses:
 *
 * Use #1 - for random 'debug printf' type messages a developer may need
 * Use #2 (selected via DEBUG_LOG_OUTPUT) is a log output.
 *
 * See #include <openthread/platform/debug_uart.h> for more details
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_DEBUG_UART
#define OPENTHREAD_CONFIG_ENABLE_DEBUG_UART 0
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_TIME_SYNC
 *
 * Define as 1 to enable the time synchronization service feature.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_TIME_SYNC
#define OPENTHREAD_CONFIG_ENABLE_TIME_SYNC 0
#endif

/**
 * @def OPENTHREAD_CONFIG_TIME_SYNC_REQUIRED
 *
 * Define as 1 to require time synchronization when attaching to a network. If the device is router capable
 * and cannot find a neighboring router supporting time synchronization, the device will form a new partition.
 * If the device is not router capable, the device will remain an orphan.
 *
 * Applicable only if time synchronization service feature is enabled (i.e., OPENTHREAD_CONFIG_ENABLE_TIME_SYNC is set)
 *
 */
#ifndef OPENTHREAD_CONFIG_TIME_SYNC_REQUIRED
#define OPENTHREAD_CONFIG_TIME_SYNC_REQUIRED 0
#endif

/**
 * @def OPENTHREAD_CONFIG_TIME_SYNC_PERIOD
 *
 * Specifies the default period of time synchronization, in seconds.
 *
 * Applicable only if time synchronization service feature is enabled (i.e., OPENTHREAD_CONFIG_ENABLE_TIME_SYNC is set).
 *
 */
#ifndef OPENTHREAD_CONFIG_TIME_SYNC_PERIOD
#define OPENTHREAD_CONFIG_TIME_SYNC_PERIOD 30
#endif

/**
 * @def OPENTHREAD_CONFIG_TIME_SYNC_XTAL_THRESHOLD
 *
 * Specifies the default XTAL threshold for a device to become Router in time synchronization enabled network, in PPM.
 *
 * Applicable only if time synchronization service feature is enabled (i.e., OPENTHREAD_CONFIG_ENABLE_TIME_SYNC is set)
 *
 */
#ifndef OPENTHREAD_CONFIG_TIME_SYNC_XTAL_THRESHOLD
#define OPENTHREAD_CONFIG_TIME_SYNC_XTAL_THRESHOLD 300
#endif

/**
 * @def OPENTHREAD_CONFIG_ENABLE_LONG_ROUTES
 *
 * Enable experimental mode for 'deep' networks, allowing packet routes up to 32 nodes.
 * This mode is incompatible with Thread 1.1.1 and older.
 *
 */
#ifndef OPENTHREAD_CONFIG_ENABLE_LONG_ROUTES
#define OPENTHREAD_CONFIG_ENABLE_LONG_ROUTES 0
#endif

/**
 * @def OPENTHREAD_CONFIG_POSIX_SETTINGS_PATH
 *
 * The settings storage path on posix platform.
 *
 */
#ifndef OPENTHREAD_CONFIG_POSIX_SETTINGS_PATH
#define OPENTHREAD_CONFIG_POSIX_SETTINGS_PATH "tmp"
#endif

/**
 * @def OPENTHREAD_CONFIG_FAILED_CHILD_TRANSMISSIONS
 *
 * This setting configures the number of consecutive MCPS.DATA-Confirms having Status NO_ACK
 * that cause a Child-to-Parent link to be considered broken.
 *
 */
#ifndef OPENTHREAD_CONFIG_FAILED_CHILD_TRANSMISSIONS
#define OPENTHREAD_CONFIG_FAILED_CHILD_TRANSMISSIONS 4
#endif

/**
 * @def OPENTHREAD_CONFIG_DEFAULT_SED_BUFFER_SIZE
 *
 * This setting configures the default buffer size for IPv6 datagram destined for an attached SED.
 * A Thread Router MUST be able to buffer at least one 1280-octet IPv6 datagram for an attached SED according to
 * the Thread Conformance Specification.
 *
 */
#ifndef OPENTHREAD_CONFIG_DEFAULT_SED_BUFFER_SIZE
#define OPENTHREAD_CONFIG_DEFAULT_SED_BUFFER_SIZE 1280
#endif

/**
 * @def OPENTHREAD_CONFIG_DEFAULT_SED_DATAGRAM_COUNT
 *
 * This setting configures the default datagram count of 106-octet IPv6 datagram per attached SED.
 * A Thread Router MUST be able to buffer at least one 106-octet IPv6 datagram per attached SED according to
 * the Thread Conformance Specification.
 *
 */
#ifndef OPENTHREAD_CONFIG_DEFAULT_SED_DATAGRAM_COUNT
#define OPENTHREAD_CONFIG_DEFAULT_SED_DATAGRAM_COUNT 1
#endif

/**
 * @def OPENTHREAD_CONFIG_TIME_SYNC_JUMP_NOTIF_MIN_US
 *
 * This setting sets the minimum amount of time (in microseconds) that the network time must jump due to
 * a time sync event for listeners to be notified of the new network time.
 *
 */
#ifndef OPENTHREAD_CONFIG_TIME_SYNC_JUMP_NOTIF_MIN_US
#define OPENTHREAD_CONFIG_TIME_SYNC_JUMP_NOTIF_MIN_US 10000
#endif

/**
 * @def OPENTHREAD_CONFIG_NUM_FRAGMENT_PRIORITY_ENTRIES
 *
 * The number of fragment priority entries.
 *
 */
#ifndef OPENTHREAD_CONFIG_NUM_FRAGMENT_PRIORITY_ENTRIES
#define OPENTHREAD_CONFIG_NUM_FRAGMENT_PRIORITY_ENTRIES 8
#endif

/**
 * @def OPENTHREAD_CONFIG_RADIO_915MHZ_OQPSK_SUPPORT
 *
 * Define to 1 to support OQPSK modulation in 915MHz frequency band. The physical layer parameters are defined in
 * section 6 of IEEE802.15.4-2006.
 *
 * @note If this setting is set to 1, the IEEE 802.15.4 channel range is 1 to 10.
 *
 * @def OPENTHREAD_CONFIG_RADIO_2P4GHZ_OQPSK_SUPPORT
 *
 * Define to 1 to support OQPSK modulation in 2.4GHz frequency band. The physical layer parameters are defined in
 * section 6 of IEEE802.15.4-2006.
 *
 * @note If this settings is set to 1, the IEEE 802.15.4 channel range is 11 to 26.
 *
 * @note At least one of these two settings must be set to 1. The platform must support the modulation and frequency
 *       band configured by the setting.
 */
#ifndef OPENTHREAD_CONFIG_RADIO_915MHZ_OQPSK_SUPPORT
#ifndef OPENTHREAD_CONFIG_RADIO_2P4GHZ_OQPSK_SUPPORT
#define OPENTHREAD_CONFIG_RADIO_915MHZ_OQPSK_SUPPORT 0
#define OPENTHREAD_CONFIG_RADIO_2P4GHZ_OQPSK_SUPPORT 1
#endif
#endif

/**
 * @def OPENTHREAD_CONFIG_DEFAULT_CHANNEL
 *
 * The default IEEE 802.15.4 channel.
 *
 */
#ifndef OPENTHREAD_CONFIG_DEFAULT_CHANNEL
#if OPENTHREAD_CONFIG_RADIO_2P4GHZ_OQPSK_SUPPORT
#define OPENTHREAD_CONFIG_DEFAULT_CHANNEL 11
#else
#if OPENTHREAD_CONFIG_RADIO_915MHZ_OQPSK_SUPPORT
#define OPENTHREAD_CONFIG_DEFAULT_CHANNEL 1
#endif // OPENTHREAD_CONFIG_RADIO_915MHZ_OQPSK_SUPPORT
#endif // OPENTHREAD_CONFIG_RADIO_2P4GHZ_OQPSK_SUPPORT
#endif // OPENTHREAD_CONFIG_DEFAULT_CHANNEL

#endif // OPENTHREAD_CORE_DEFAULT_CONFIG_H_