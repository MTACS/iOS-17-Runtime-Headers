
@interface SHCoreError : NSObject

+ (bool)annotateError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 keyOverrides:(id)arg4;
+ (bool)annotateError:(id*)arg1 withError:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3;
+ (id)messageForCode:(long long)arg1;
+ (id)normalizedError:(id)arg1;
+ (id)normalizedUserInfo:(id)arg1;

@end
