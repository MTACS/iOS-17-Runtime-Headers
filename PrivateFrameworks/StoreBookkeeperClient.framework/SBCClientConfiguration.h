
@interface SBCClientConfiguration : NSObject <NSSecureCoding> {
    SBCPlaybackPositionDomain * _playbackPositionDomain;
}

@property (nonatomic, readonly) SBCPlaybackPositionDomain *playbackPositionDomain;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackPositionDomain:(id)arg1;
- (id)playbackPositionDomain;

@end
