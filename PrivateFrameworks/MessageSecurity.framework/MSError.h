
@interface MSError : NSError

+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 errorLevel:(unsigned long long)arg3 underlyingError:(id)arg4 description:(id)arg5 arguments:(char *)arg6;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 description:(id)arg4;

@end
