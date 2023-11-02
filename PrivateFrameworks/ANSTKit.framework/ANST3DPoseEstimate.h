
@interface ANST3DPoseEstimate : NSObject <NSSecureCoding> {
    long long  _refinedPitch;
    long long  _refinedRoll;
    long long  _refinedYaw;
    long long  _roll;
    long long  _yaw;
}

@property (nonatomic, readonly) long long refinedPitch;
@property (nonatomic, readonly) long long refinedRoll;
@property (nonatomic, readonly) long long refinedYaw;
@property (nonatomic, readonly) long long roll;
@property (nonatomic, readonly) long long yaw;

+ (id)new;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithYaw:(long long)arg1 roll:(long long)arg2 refinedYaw:(long long)arg3 refinedRoll:(long long)arg4 refinedPitch:(long long)arg5;
- (long long)refinedPitch;
- (long long)refinedRoll;
- (long long)refinedYaw;
- (long long)roll;
- (long long)yaw;

@end
