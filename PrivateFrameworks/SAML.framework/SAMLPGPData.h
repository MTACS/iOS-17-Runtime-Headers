
@interface SAMLPGPData : SAMLBaseElement

@property (nonatomic, readonly) NSData *keyId;
@property (nonatomic, readonly) NSData *packet;

+ (id)createElement:(id*)arg1;

- (id)keyId;
- (id)packet;

@end
