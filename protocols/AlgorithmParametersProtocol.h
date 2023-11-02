
@protocol AlgorithmParametersProtocol

@required

- (void)addPerChunkParametersWith:(double)arg1 numChunks:(unsigned long long)arg2;
- (bool)calculateAndVerifyPerChunkClippingBoundsIn:(NSArray *)arg1 withOverallClippingBound:(double)arg2;
- (double)clippingBound;
- (NSDictionary *)parameters;

@end
