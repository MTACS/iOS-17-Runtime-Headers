
@protocol P256PublicKeyProtocol <NSObject>

@required

- (NSData *)dataRepresentation;
- (id)initWithData:(NSData *)arg1 error:(id*)arg2;
- (bool)verifySignature:(NSData *)arg1 data:(NSData *)arg2;

@end
