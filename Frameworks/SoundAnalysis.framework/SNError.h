
@interface SNError : NSObject

+ (void)autoreleasepoolWithError:(id*)arg1 action:(id /* block */)arg2;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 message:(id)arg4;
+ (void)populateClientError:(id*)arg1 withCode:(long long)arg2 underlyingError:(id)arg3 message:(id)arg4;
+ (void)populateClientError:(id*)arg1 withDomain:(id)arg2 code:(long long)arg3 underlyingError:(id)arg4 message:(id)arg5;
+ (void)wrapClientError:(id*)arg1 withDomain:(id)arg2 code:(long long)arg3 message:(id)arg4;

- (id)init;

@end
