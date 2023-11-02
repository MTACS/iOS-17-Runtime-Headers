
@protocol VCRateAdaptationDelegate <NSObject>

@required

- (void)vcSession:(VCSession *)arg1 downlinkRateAdaptationDidChangeWithInfo:(NSDictionary *)arg2;
- (void)vcSession:(VCSession *)arg1 uplinkRateAdaptationDidChangeWithInfo:(NSDictionary *)arg2;

@end
