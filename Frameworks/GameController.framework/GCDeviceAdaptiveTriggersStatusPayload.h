
@interface GCDeviceAdaptiveTriggersStatusPayload : NSObject <NSSecureCoding> {
    NSNumber * _armPosition;
    NSNumber * _mode;
    NSNumber * _status;
}

@property (nonatomic, readonly) NSNumber *armPosition;
@property (nonatomic, readonly) NSNumber *mode;
@property (nonatomic, readonly) NSNumber *status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)armPosition;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFeedbackWithStatus:(unsigned char)arg1 armPosition:(unsigned char)arg2 mode:(unsigned char)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mode;
- (id)redactedDescription;
- (id)status;

@end
