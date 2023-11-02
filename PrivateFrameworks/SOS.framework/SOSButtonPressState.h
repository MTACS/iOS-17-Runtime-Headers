
@interface SOSButtonPressState : NSObject <NSSecureCoding> {
    double  _lockPressedMCTTimestamp;
    bool  _volumeDownPressed;
    double  _volumeDownPressedMCTTimestamp;
    bool  _volumeUpPressed;
    double  _volumeUpPressedMCTTimestamp;
}

@property (nonatomic, readonly) double lockPressedMCTTimestamp;
@property (nonatomic, readonly) bool volumeDownPressed;
@property (nonatomic, readonly) double volumeDownPressedMCTTimestamp;
@property (nonatomic, readonly) bool volumeUpPressed;
@property (nonatomic, readonly) double volumeUpPressedMCTTimestamp;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)getButtonPressGap;
- (id)initWithCoder:(id)arg1;
- (id)initWithVolumeUpPressed:(bool)arg1 Timestamp:(double)arg2 VolumeDownPressed:(bool)arg3 Timestamp:(double)arg4 LockPressedTimestamp:(double)arg5;
- (double)lockPressedMCTTimestamp;
- (bool)volumeDownPressed;
- (double)volumeDownPressedMCTTimestamp;
- (bool)volumeUpPressed;
- (double)volumeUpPressedMCTTimestamp;

@end
