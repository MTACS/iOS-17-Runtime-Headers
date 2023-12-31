
@protocol TSPCryptoInfo <NSObject>

@required

- (NSArray *)blockInfos;
- (SFUCryptoKey *)cryptoKey;
- (unsigned long long)decodedLength;
- (bool)hasDecodedLength;
- (<TSPMutableCryptoInfo> *)mutableCryptoInfoCopy;
- (unsigned long long)preferredBlockSize;

@end
