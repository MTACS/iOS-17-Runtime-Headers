
@interface SPRError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)errorWithCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;
+ (id)failureForCode:(long long)arg1;

@end
