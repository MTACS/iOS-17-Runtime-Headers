
@interface CRError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 userInfo:(id)arg4;

@end
