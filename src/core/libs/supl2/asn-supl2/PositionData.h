/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-REPORT"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _PositionData_H_
#define _PositionData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Position.h"
#include "PosMethod.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GNSSPosTechnology;
    struct GANSSsignalsInfo;

    /* PositionData */
    typedef struct PositionData
    {
        Position_t position;
        PosMethod_t *posMethod /* OPTIONAL */;
        struct GNSSPosTechnology *gnssPosTechnology /* OPTIONAL */;
        struct GANSSsignalsInfo *ganssSignalsInfo /* OPTIONAL */;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } PositionData_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_PositionData;
    extern asn_SEQUENCE_specifics_t asn_SPC_PositionData_specs_1;
    extern asn_TYPE_member_t asn_MBR_PositionData_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GNSSPosTechnology.h"
#include "GANSSsignalsInfo.h"

#endif /* _PositionData_H_ */
#include "asn_internal.h"