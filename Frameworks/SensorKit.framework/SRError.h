
@interface SRError : NSObject

+ (id)authorizationError;
+ (id)authorizationErrorWithStatus:(long long)arg1;
+ (id)connectionNotFoundError;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3 underlyingError:(id)arg4;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)invalidEntitlementError;
+ (id)invalidInfoPlistErrorWithMissingKey:(id)arg1 code:(long long)arg2;

@end
