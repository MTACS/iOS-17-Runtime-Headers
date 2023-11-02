
@interface PGError : NSObject

+ (id)errorForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)xpcSafeErrorWithError:(id)arg1;

@end
