
@interface PMMMusicContainer : NSObject <NSSecureCoding> {
    NSString * _bundleId;
    NSDate * _pauseTime;
    NSDate * _playTime;
    NSString * _trackIdentifier;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSDate *pauseTime;
@property (nonatomic, readonly) NSDate *playTime;
@property (nonatomic, readonly) NSString *trackIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pauseTime;
- (id)playTime;
- (void)setPauseIfUnset;
- (void)setPlayingWithBundleId:(id)arg1 trackIdentifier:(id)arg2 playTime:(id)arg3;
- (id)trackIdentifier;

@end
