
@interface PlaybackSpeed : INObject

@property (nonatomic) long long playbackSpeedType;
@property (nonatomic) double speedMagnitude;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
