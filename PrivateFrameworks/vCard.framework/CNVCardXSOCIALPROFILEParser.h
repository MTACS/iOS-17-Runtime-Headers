
@interface CNVCardXSOCIALPROFILEParser : NSObject

+ (id)adjust:(id)arg1 withParameters:(id)arg2;
+ (void)handleBundleIndentifiersAsList:(id)arg1 socialProfile:(id)arg2;
+ (void)handleSpecialCaseUpdateForService:(id)arg1 socialProfile:(id)arg2;
+ (id)os_log;
+ (id)parametersForSocialProperty:(id)arg1;
+ (void)processExtensionValuesForLines:(id)arg1 parser:(id)arg2;
+ (id)profileFromURL:(id)arg1;
+ (bool)propertyLooksLikeDOSAttackString:(id)arg1;
+ (id)rawForSocialProperty:(id)arg1;
+ (id)typeForSocialProperty:(id)arg1;
+ (id)unfold:(id)arg1;
+ (id)unwrapDoubleQuotedProperty:(id)arg1;
+ (id)urlSuffixForSocialProperty:(id)arg1;
+ (id)valueWithParser:(id)arg1;

@end
