/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef _GsmCellInformation_H_
#define _GsmCellInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct NMR;

    /* GsmCellInformation */
    typedef struct GsmCellInformation
    {
        long refMCC;
        long refMNC;
        long refLAC;
        long refCI;
        struct NMR *nMR /* OPTIONAL */;
        long *tA /* OPTIONAL */;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GsmCellInformation_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GsmCellInformation;
    extern asn_SEQUENCE_specifics_t asn_SPC_GsmCellInformation_specs_1;
    extern asn_TYPE_member_t asn_MBR_GsmCellInformation_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NMR.h"

#endif /* _GsmCellInformation_H_ */
#include "asn_internal.h"