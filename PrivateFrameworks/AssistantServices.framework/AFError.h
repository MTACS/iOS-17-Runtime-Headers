
@interface AFError : NSObject

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 underlyingErrors:(id)arg3;
+ (id)new;

- (id)init;

@end
