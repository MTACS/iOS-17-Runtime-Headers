
@interface IDSPayloadInspector : NSObject

+ (void)enforceSecurityError:(long long)arg1 messageGuid:(id)arg2;
+ (void)inspectPayload:(id)arg1 messageGuid:(id)arg2;
+ (long long)validateData:(id)arg1 messageGuid:(id)arg2;
+ (long long)validateString:(id)arg1 messageGuid:(id)arg2;

@end
