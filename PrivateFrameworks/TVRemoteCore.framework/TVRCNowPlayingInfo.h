
@interface TVRCNowPlayingInfo : NSObject <NSSecureCoding> {
    NSNumber * _playbackRate;
}

@property (nonatomic, retain) NSNumber *playbackRate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToNowPlayingInfo:(id)arg1;
- (id)playbackRate;
- (void)setPlaybackRate:(id)arg1;

@end
