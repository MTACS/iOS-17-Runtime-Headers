
@protocol VCMediaStreamRateAdaptationDelegate <NSObject>

@required

- (void)rateAdaptation:(VCMediaStreamRateAdaptation *)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;

@end
