
@interface CMOdometry : CMLogItem {
    NSNumber * _deltaPositionX;
    NSNumber * _deltaPositionY;
    NSNumber * _deltaPositionZ;
    NSNumber * _deltaVelocityX;
    NSNumber * _deltaVelocityY;
    NSNumber * _deltaVelocityZ;
}

@property (nonatomic, readonly) NSNumber *deltaPositionX;
@property (nonatomic, readonly) NSNumber *deltaPositionY;
@property (nonatomic, readonly) NSNumber *deltaPositionZ;
@property (nonatomic, readonly) NSNumber *deltaVelocityX;
@property (nonatomic, readonly) NSNumber *deltaVelocityY;
@property (nonatomic, readonly) NSNumber *deltaVelocityZ;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deltaPositionX;
- (id)deltaPositionY;
- (id)deltaPositionZ;
- (id)deltaVelocityX;
- (id)deltaVelocityY;
- (id)deltaVelocityZ;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeltaPositionX:(id)arg1 deltaPositionY:(id)arg2 deltaPositionZ:(id)arg3 deltaVelocityX:(id)arg4 deltaVelocityY:(id)arg5 deltaVelocityZ:(id)arg6 timestamp:(double)arg7;

@end
