// All of the weak implementations for functions to be defined by radio module

#include "whale_radio.h"

#define _WEAK_ __attribute__((weak))

#define UNIMPLEMENTED (-1)

_WEAK_ int w_radio_init(void) { return UNIMPLEMENTED; }
_WEAK_ int w_radio_error_get(void) { return UNIMPLEMENTED; }

_WEAK_ int w_radio_node_address_set(int node_address) { return UNIMPLEMENTED; }
_WEAK_ int w_radio_node_address_get(int *node_address) { return UNIMPLEMENTED; }

_WEAK_ int w_radio_subnet_address_set(int sub_address) { return UNIMPLEMENTED; }
_WEAK_ int w_radio_subnet_address_get(int *sub_address) { return UNIMPLEMENTED; }

_WEAK_ int w_radio_rssi_get(int *rssi) { return UNIMPLEMENTED; }

_WEAK_ int w_radio_tx(
	int rx_address,
	void *payload_buffer,
	ptrdiff_t buffer_size
) { return UNIMPLEMENTED; }

_WEAK_ int w_radio_rx(
	void *payload_buffer,
	ptrdiff_t buffer_size,
	ptrdiff_t *payload_size,
	int *tx_address
) { return UNIMPLEMENTED; }

_WEAK_ int w_radio_tx_broadcast(
	void *payload_buffer,
	ptrdiff_t buffer_size
) { return UNIMPLEMENTED; }

_WEAK_ int w_radio_rx_broadcast(
	void *payload_buffer,
	ptrdiff_t buffer_size,
	ptrdiff_t *payload_size,
	int *tx_address
) { return UNIMPLEMENTED; }
