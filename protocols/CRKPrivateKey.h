
@protocol CRKPrivateKey <CRKKeychainItem>

@required

- (NSData *)dataRepresentation;
- (struct __SecKey { }*)underlyingPrivateKey;

@end
