
@interface AFMyriadGoodnessScoreContext : NSObject {
    double  _mediaPlaybackInterruptedTime;
    AFMyriadGoodnessScoreOverrideContext * _overriddenContext;
    NSSet * _reasons;
    bool  _recentlyWonBySmallAmount;
}

@property (nonatomic) double mediaPlaybackInterruptedTime;
@property (nonatomic, copy) NSSet *reasons;
@property (nonatomic) bool recentlyWonBySmallAmount;

- (void).cxx_destruct;
- (id)description;
- (id)getOverridingContext;
- (id)init;
- (double)mediaPlaybackInterruptedTime;
- (id)reasons;
- (bool)recentlyWonBySmallAmount;
- (void)setMediaPlaybackInterruptedTime:(double)arg1;
- (void)setOverridingContext:(id)arg1;
- (void)setReasons:(id)arg1;
- (void)setRecentlyWonBySmallAmount:(bool)arg1;

@end
