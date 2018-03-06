/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#ifndef _GANSSUTCModel_H_
#define _GANSSUTCModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GANSSUTCModel */
    typedef struct GANSSUTCModel
    {
        long ganssUtcA1;
        long ganssUtcA0;
        long ganssUtcTot;
        long ganssUtcWNt;
        long ganssUtcDeltaTls;
        long ganssUtcWNlsf;
        long ganssUtcDN;
        long ganssUtcDeltaTlsf;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSUTCModel_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSUTCModel;
    extern asn_SEQUENCE_specifics_t asn_SPC_GANSSUTCModel_specs_1;
    extern asn_TYPE_member_t asn_MBR_GANSSUTCModel_1[8];

#ifdef __cplusplus
}
#endif

#endif /* _GANSSUTCModel_H_ */
#include <asn_internal.h>