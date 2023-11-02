
@protocol CAPixelConstraints <NSObject>

@required

- (const float*)averagePixelTable;
- (const float*)nitsTable;
- (const float*)rgbWeights;
- (unsigned long long)tableSize;

@end
