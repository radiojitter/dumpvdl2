/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ADSv2DateTimeGroup_H_
#define	_ADSv2DateTimeGroup_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Date.h"
#include "Timesec.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ADSv2DateTimeGroup */
typedef struct ADSv2DateTimeGroup {
	Date_t	 date;
	Timesec_t	 time;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ADSv2DateTimeGroup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ADSv2DateTimeGroup;

#ifdef __cplusplus
}
#endif

#endif	/* _ADSv2DateTimeGroup_H_ */
#include "asn_internal.h"