
@interface NFCError : NSError

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithNFCDError:(id)arg1 defaultNFCErrorCode:(long long)arg2;

- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;

@end
