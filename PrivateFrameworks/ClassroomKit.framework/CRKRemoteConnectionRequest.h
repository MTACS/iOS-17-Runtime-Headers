
@interface CRKRemoteConnectionRequest : CATTaskRequest {
    double  _notificationDuration;
}

@property (nonatomic) double notificationDuration;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)notificationDuration;
- (void)setNotificationDuration:(double)arg1;

@end
