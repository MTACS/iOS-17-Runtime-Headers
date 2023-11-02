
@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol> {
    ATXAppOrClipLaunch * _launch;
}

@property (nonatomic, retain) ATXAppOrClipLaunch *launch;

- (void).cxx_destruct;
- (id)bundleId;
- (id)init;
- (id)initFromLaunch:(id)arg1;
- (bool)isClip;
- (id)launch;
- (id)location;
- (void)setLaunch:(id)arg1;

@end
