
@protocol ENCypher <NSSecureCoding, NSObject>

@required

- (NSData *)cypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (NSData *)decypherData:(NSData *)arg1 withAccountIdentity:(ENAccountIdentity *)arg2 signingDevicePublicKey:(id <ENDevicePublicKey>)arg3 identifier:(NSString *)arg4 error:(id*)arg5;
- (NSString *)identifier;

@end
