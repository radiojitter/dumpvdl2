/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_RNPSegmentStartPoint_H_
#define	_RNPSegmentStartPoint_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RNPSegmentPoint.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RNPSegmentStartPoint */
typedef RNPSegmentPoint_t	 RNPSegmentStartPoint_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RNPSegmentStartPoint;
asn_struct_free_f RNPSegmentStartPoint_free;
asn_struct_print_f RNPSegmentStartPoint_print;
asn_constr_check_f RNPSegmentStartPoint_constraint;
ber_type_decoder_f RNPSegmentStartPoint_decode_ber;
der_type_encoder_f RNPSegmentStartPoint_encode_der;
xer_type_decoder_f RNPSegmentStartPoint_decode_xer;
xer_type_encoder_f RNPSegmentStartPoint_encode_xer;
per_type_decoder_f RNPSegmentStartPoint_decode_uper;
per_type_encoder_f RNPSegmentStartPoint_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RNPSegmentStartPoint_H_ */
#include "asn_internal.h"