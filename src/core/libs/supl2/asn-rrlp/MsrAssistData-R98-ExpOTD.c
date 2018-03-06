/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "MsrAssistData-R98-ExpOTD.h"

asn_TYPE_member_t asn_MBR_MsrAssistData_R98_ExpOTD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MsrAssistData_R98_ExpOTD, msrAssistList_R98_ExpOTD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SeqOfMsrAssistBTS_R98_ExpOTD,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msrAssistList-R98-ExpOTD"
		},
};
static const ber_tlv_tag_t asn_DEF_MsrAssistData_R98_ExpOTD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MsrAssistData_R98_ExpOTD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* msrAssistList-R98-ExpOTD */
};
asn_SEQUENCE_specifics_t asn_SPC_MsrAssistData_R98_ExpOTD_specs_1 = {
	sizeof(struct MsrAssistData_R98_ExpOTD),
	offsetof(struct MsrAssistData_R98_ExpOTD, _asn_ctx),
	asn_MAP_MsrAssistData_R98_ExpOTD_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MsrAssistData_R98_ExpOTD = {
	"MsrAssistData-R98-ExpOTD",
	"MsrAssistData-R98-ExpOTD",
	&asn_OP_SEQUENCE,
	asn_DEF_MsrAssistData_R98_ExpOTD_tags_1,
	sizeof(asn_DEF_MsrAssistData_R98_ExpOTD_tags_1)
		/sizeof(asn_DEF_MsrAssistData_R98_ExpOTD_tags_1[0]), /* 1 */
	asn_DEF_MsrAssistData_R98_ExpOTD_tags_1,	/* Same as above */
	sizeof(asn_DEF_MsrAssistData_R98_ExpOTD_tags_1)
		/sizeof(asn_DEF_MsrAssistData_R98_ExpOTD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MsrAssistData_R98_ExpOTD_1,
	1,	/* Elements count */
	&asn_SPC_MsrAssistData_R98_ExpOTD_specs_1	/* Additional specs */
};
