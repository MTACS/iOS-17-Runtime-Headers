
@interface CRFormContentTypeUtilities : NSObject

+ (unsigned long long)contentTypeFromString:(id)arg1;
+ (bool)contentTypeIsAddressComponent:(unsigned long long)arg1;
+ (bool)contentTypeIsAutoFillable:(unsigned long long)arg1;
+ (bool)contentTypeIsComponentType:(unsigned long long)arg1 previousType:(unsigned long long)arg2 nextType:(unsigned long long)arg3;
+ (bool)contentTypeIsCreditCardComponent:(unsigned long long)arg1;
+ (bool)contentTypeIsStartOfAutofillContext:(unsigned long long)arg1 previousType:(unsigned long long)arg2 nextType:(unsigned long long)arg3;
+ (bool)contentTypeIsTelephoneComponent:(unsigned long long)arg1;
+ (id)shortStringFromContentType:(unsigned long long)arg1;
+ (bool)shouldAssignTextContentTypeForField:(id)arg1 updateExternalFields:(bool)arg2 allowOverride:(bool)arg3 allowAllDetectionSources:(bool)arg4;
+ (id)stringFromContentType:(unsigned long long)arg1;

@end
