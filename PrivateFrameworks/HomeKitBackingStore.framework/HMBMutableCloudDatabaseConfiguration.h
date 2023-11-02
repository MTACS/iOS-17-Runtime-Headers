
@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (getter=isManateeContainer) bool manateeContainer;
@property (nonatomic) bool registerForDBNotifications;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property long long subscriptionPushRegistrationAction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
