
@protocol TSPMutableCryptoInfo <TSPCryptoInfo>

@required

- (void)addBlockInfo:(id <TSUEncodedBlockInfo>)arg1;
- (void)incrementDecodedLengthBy:(unsigned long long)arg1;
- (void)reset;

@end
