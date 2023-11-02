
@interface CRFormContentTypeRefiner : NSObject

+ (id)_findSubTextFieldsInFields:(id)arg1 beginIndex:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 contentType:(unsigned long long)arg4 processedCount:(unsigned long long*)arg5;
+ (id)_groupCreditCardNumberFields:(id)arg1 beginIndex:(unsigned long long)arg2 type:(unsigned long long)arg3 processedCount:(unsigned long long*)arg4;
+ (id)_groupPhoneNumberFields:(id)arg1 beginIndex:(unsigned long long)arg2 type:(unsigned long long)arg3 processedCount:(unsigned long long*)arg4;
+ (id)_groupRegionFromSubFields:(id)arg1;
+ (bool)_isRegion:(id)arg1 onLeftOfRegion:(id)arg2 withTolerance:(double)arg3;
+ (unsigned long long)_refineAddressTypesForFields:(id)arg1 beginIndex:(unsigned long long)arg2 type:(unsigned long long)arg3;
+ (unsigned long long)_refineCreditCardExpirationTypesForFields:(id)arg1 beginIndex:(unsigned long long)arg2 type:(unsigned long long)arg3;
+ (unsigned long long)_refineDateTypesForFields:(id)arg1 beginIndex:(unsigned long long)arg2 type:(unsigned long long)arg3 locale:(id)arg4;
+ (unsigned long long)_refinePhoneNumberTypesForFields:(id)arg1 beginIndex:(unsigned long long)arg2 type:(unsigned long long)arg3;
+ (id)groupAndAssignStructuralContentTypesForFields:(id)arg1 locale:(id)arg2 updateExternalFields:(bool)arg3;

@end
