
@interface TransparencyError : NSError

+ (id)diagnosticError:(id)arg1;
+ (id)diagnosticError:(id)arg1 depth:(unsigned long long)arg2;
+ (id)diagnosticUserInfo:(id)arg1 depth:(unsigned long long)arg2;
+ (id)diagnosticUserInfoValue:(id)arg1 depth:(unsigned long long)arg2;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5 arguments:(char *)arg6;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 userinfo:(id)arg5 description:(id)arg6;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 userinfo:(id)arg5 description:(id)arg6 arguments:(char *)arg7;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 description:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userinfo:(id)arg4 description:(id)arg5;
+ (id)errorWithError:(id)arg1 underlyingError:(id)arg2;
+ (bool)hasUnknownSPKIHashError:(id)arg1;
+ (id)truncateUnderlyingErrorDepth:(id)arg1 maxDepth:(unsigned long long)arg2;
+ (id)unimplementedError:(id)arg1;

@end
