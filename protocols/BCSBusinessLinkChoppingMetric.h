
@protocol BCSBusinessLinkChoppingMetric <NSObject>

@required

- (bool)isChoppingEnabled;
- (void)setChoppingEnabled:(bool)arg1;
- (void)setSuccessfulChop:(long long)arg1;
- (long long)successfulChop;

@end
