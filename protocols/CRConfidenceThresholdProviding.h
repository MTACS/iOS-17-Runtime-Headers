
@protocol CRConfidenceThresholdProviding <NSObject>

@required

- (CRConfidenceThresholds *)thresholdsForTextRegion:(id <CRRegion>)arg1 withLocale:(NSString *)arg2;

@end
