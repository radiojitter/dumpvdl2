/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_AirspeedChange_H_
#define	_AirspeedChange_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MachNumberChange.h"
#include "IasChange.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AirspeedChange */
typedef struct AirspeedChange {
	MachNumberChange_t	*mach_number_change	/* OPTIONAL */;
	IasChange_t	*ias_change	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AirspeedChange_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AirspeedChange;

#ifdef __cplusplus
}
#endif

#endif	/* _AirspeedChange_H_ */
#include "asn_internal.h"
