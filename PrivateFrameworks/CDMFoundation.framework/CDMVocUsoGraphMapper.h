
@interface CDMVocUsoGraphMapper : NSObject

+ (id)buildAppNameUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildAttachmentTypeUSOGraph:(id)arg1 withSemantic:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildContactTypeUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildDecimalRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildDeviceCategoryUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildEmailAddressRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildEmailContactUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildEmergencyPhoneNumberUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildEmergencyPhonePersonUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (struct unique_ptr<siri::ontology::UsoEntitySpan, std::default_delete<siri::ontology::UsoEntitySpan>> { struct __compressed_pair<siri::ontology::UsoEntitySpan *, std::default_delete<siri::ontology::UsoEntitySpan>> { struct UsoEntitySpan {} *x_1_1_1; } x1; })buildEntitySpanWithSemantic:(id)arg1 withVocLabel:(id)arg2 withStartIndex:(unsigned int)arg3 withEndIndex:(unsigned int)arg4 withTokenCount:(unsigned int)arg5;
+ (id)buildFractionNumberUSOGraphWithIdentifier:(id)arg1 withFractionSemantic:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> { struct __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>> { struct UsoIdentifier {} *x_1_1_1; } x1; })buildIdentifierWithSemantic:(id)arg1 withVocLabel:(id)arg2;
+ (id)buildIntegerRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildPersonRelationshipUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildPhoneContactUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildPhoneNumberRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildRootUSOGraphWithStartCharIndex:(unsigned int)arg1 withEndCharIndex:(unsigned int)arg2;
+ (id)buildSettingUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)buildSmsAttributesUSOGraph:(id)arg1 withFractionSemantic:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildVocUSOGraphForHandsFreeListPosition:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildVocUSOGraphForRegexOrdinal:(unsigned int)arg1 withVocLabel:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildVocUSOGraphWithVocLabel:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildVocUSOGraphWithVocLabel:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5 withTokenCount:(unsigned int)arg6;
+ (id)emergencyPhoneNumberSemantic;
+ (id)emergencyPhonePersonSemantic;
+ (id)listPositionSemantic;
+ (id)ordinalsSemantic;
+ (id)settingVocLabel;

@end
