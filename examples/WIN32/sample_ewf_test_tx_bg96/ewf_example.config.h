/************************************************************************//**
 * @file
 * @version Preview
 * @copyright Copyright (c) Microsoft Corporation. All rights reserved.
 * SPDX-License-Identifier: MIT
 * @brief The Embedded Wireless Framework example configuration.
 ****************************************************************************/

#ifndef __ewf_example_conf__h__included__
#define __ewf_example_conf__h__included__

#ifdef __cplusplus
extern "C" {
#endif

/************************************************************************//**
 * @defgroup group_example_configuration EWF example configuration
 * @brief The definitions to configure the sample software.
 * @{
 ****************************************************************************/

/**
 * @defgroup group_example_configuration_allocator Allocator configuration
 * @brief Allocator configuration settings used in examples
 * @{
 */

/** @brief the number of message allocator blocks */
#define EWF_CONFIG_MESSAGE_ALLOCATOR_BLOCK_COUNT                    (8)

/** @brief the size of each message allocator block */
#define EWF_CONFIG_MESSAGE_ALLOCATOR_BLOCK_SIZE                     (512)

/** @} *** group_example_configuration_allocator */

/**
 * @defgroup group_example_configuration_interface Modem configuration
 * @brief Modem configuration settings used in examples
 * @{
 */

/** @brief Define the WIN32 COM port interface serial port file name */
#define EWF_CONFIG_INTERFACE_WIN32_COM_PORT_FILE_NAME               ("\\\\.\\COM78")

/** @brief Define the WIN32 COM port interface serial port baud rate */
#define EWF_CONFIG_INTERFACE_WIN32_COM_PORT_BAUD_RATE               (CBR_115200)

/** @brief Define the WIN32 COM port interface serial port byte size */
#define EWF_CONFIG_INTERFACE_WIN32_COM_PORT_BYTE_SIZE               (8)

/** @brief Define the WIN32 COM port interface serial port parity */
#define EWF_CONFIG_INTERFACE_WIN32_COM_PORT_PARITY                  (NOPARITY)

/** @brief Define the WIN32 COM port interface serial stop bits */
#define EWF_CONFIG_INTERFACE_WIN32_COM_PORT_STOP_BITS               (ONESTOPBIT)

/** @} *** group_example_configuration_interface */

/**
 * @defgroup group_example_configuration_modem Modem configuration
 * @brief Modem configuration settings used in examples
 * @{
 */

/** @brief The SIM PIN for the modem */
#define EWF_CONFIG_SIM_PIN                                          ("0000")

/** @brief The modem context ID used */
#define EWF_CONFIG_CONTEXT_ID                                       (1)

/** @} *** group_example_configuration_modem */

/**
 * @defgroup group_example_configuration_test_echo Echo test configuration
 * @brief Echo test configuration settings used in examples
 * @{
 */

#define EWF_ADAPTER_TEST_TCP_HTTP_TEST_ENABLED                      0
#define EWF_ADAPTER_TEST_TCP_ECHO_SERVER_HOSTNAME_STR               ""
#define EWF_ADAPTER_TEST_TCP_LOCAL_SERVER_PORT                      4000
#define EWF_ADAPTER_TEST_TCP_CLIENT_SERVER_TEST_ENABLED             0
#define EWF_ADAPTER_TEST_TCP_LOOP_SLEEP_TICKS                       0

#define EWF_ADAPTER_TEST_UDP_ECHO_SERVER_HOSTNAME_STR               ""
#define EWF_ADAPTER_TEST_UDP_LOCAL_SERVER_PORT                      5000
#define EWF_ADAPTER_TEST_UDP_CLIENT_SERVER_TEST_ENABLED             0
#define EWF_ADAPTER_TEST_UDP_LOOP_SLEEP_TICKS                       0

/** @} *** group_example_configuration_test_echo */

/************************************************************************//**
 * @}
 ****************************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* __ewf_example_conf__h__included__ */
