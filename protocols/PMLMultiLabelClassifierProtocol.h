
@protocol PMLMultiLabelClassifierProtocol <NSObject>

@required

- (unsigned long long)outputDimension;
- (NSArray *)predict:(PMLSparseVector *)arg1;

@end
