
@interface SOErrorHelper : NSObject

+ (id)deniedBundleIdentifier:(id)arg1;
+ (id)doNotHandleBreakingRecursionWithCallerBundleIdentifier:(id)arg1;
+ (bool)error:(id)arg1 hasCode:(long long)arg2;
+ (bool)error:(id)arg1 hasCode:(long long)arg2 subcode:(long long)arg3;
+ (id)errorNotSupported;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 moreInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 suberror:(id)arg3;
+ (id)errorWithCode:(long long)arg1 subcode:(long long)arg2 message:(id)arg3;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)internalErrorWithMessage:(id)arg1;
+ (id)invalidURLError:(id)arg1;
+ (id)missingEntitlementError:(id)arg1;
+ (id)parameterErrorWithMessage:(id)arg1;
+ (void)raiseExceptionOnError:(id)arg1;
+ (id)silentInternalErrorWithMessage:(id)arg1;

@end
