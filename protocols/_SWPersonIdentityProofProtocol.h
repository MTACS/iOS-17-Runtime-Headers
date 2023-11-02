
@protocol _SWPersonIdentityProofProtocol <NSObject>

@required

- (NSArray *)inclusionHashes;
- (unsigned long long)localKeyIndex;
- (NSData *)publicKey;
- (void)setInclusionHashes:(NSArray *)arg1;
- (void)setLocalKeyIndex:(unsigned long long)arg1;
- (void)setPublicKey:(NSData *)arg1;

@end
