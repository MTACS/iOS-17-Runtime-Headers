
@interface TPSResponseError : NSError

+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end
