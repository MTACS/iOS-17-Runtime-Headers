
@protocol BWAdaptiveBracketingParameters <NSObject>

@required

- (NSArray *)adaptiveBracketingFrameParametersForGroup:(int)arg1;
- (float)evZeroTargetGain;
- (bool)generateWhiteBalanceParameters;
- (float)previewSNR;
- (bool)stationary;
- (double)totalIntegrationTime;

@end
