
@interface DMFOpenAppRequest : DMFTaskRequest {
    NSData * _activityData;
    NSString * _activityType;
    NSString * _bundleIdentifier;
    bool  _lockInApp;
}

@property (nonatomic, copy) NSData *activityData;
@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) bool lockInApp;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityData;
- (id)activityType;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)lockInApp;
- (void)setActivityData:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLockInApp:(bool)arg1;

@end
