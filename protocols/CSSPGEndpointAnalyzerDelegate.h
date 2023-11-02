
@protocol CSSPGEndpointAnalyzerDelegate <NSObject>

@optional

- (void)spgEndpointAnalyzer:(CSSPGEndpointAnalyzer *)arg1 hasSilenceScoreEstimate:(double)arg2 clientProcessedAudioTimeMS:(float)arg3;
- (void)spgEndpointAnalyzerDidDetectEndpoint:(CSSPGEndpointAnalyzer *)arg1;

@end
