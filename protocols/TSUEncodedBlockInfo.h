
@protocol TSUEncodedBlockInfo <NSObject>

@required

- (unsigned long long)decodedLength;
- (unsigned long long)encodedLength;

@end
