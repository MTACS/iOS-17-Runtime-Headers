
@protocol CRTextRecognizerModelOutput <NSObject>

@required

- (unsigned long long)batchSize;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setTextFeatureInfo:(NSArray *)arg1;
- (NSArray *)textFeatureInfo;

@end
