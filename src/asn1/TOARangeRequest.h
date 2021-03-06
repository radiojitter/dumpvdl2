/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_TOARangeRequest_H_
#define	_TOARangeRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ADSv2LatitudeLongitude.h"
#include "WaypointName.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TOARangeRequest */
typedef struct TOARangeRequest {
	ADSv2LatitudeLongitude_t	 latitudeLongitude;
	WaypointName_t	*name	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TOARangeRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TOARangeRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _TOARangeRequest_H_ */
#include "asn_internal.h"
