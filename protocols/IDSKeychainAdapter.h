
@protocol IDSKeychainAdapter <NSObject>

@required

- (bool)getKeychainData:(id*)arg1 service:(NSString *)arg2 account:(NSString *)arg3 accessGroup:(NSString *)arg4 error:(int*)arg5;
- (bool)removeKeychainDataOnService:(NSString *)arg1 account:(NSString *)arg2 error:(int*)arg3;
- (bool)setKeychainData:(NSData *)arg1 service:(NSString *)arg2 account:(NSString *)arg3 accessGroup:(NSString *)arg4 allowSync:(bool)arg5 error:(int*)arg6;

@end
