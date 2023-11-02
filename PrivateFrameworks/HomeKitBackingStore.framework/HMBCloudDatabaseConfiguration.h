
@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying> {
    CKContainerID * _containerID;
    CKOperationConfiguration * _defaultOperationConfiguration;
    bool  _manateeContainer;
    bool  _registerForDBNotifications;
    NSString * _sourceApplicationBundleIdentifier;
    long long  _subscriptionPushRegistrationAction;
}

@property (readonly, copy) CKContainerID *containerID;
@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (getter=isManateeContainer) bool manateeContainer;
@property (nonatomic) bool registerForDBNotifications;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property long long subscriptionPushRegistrationAction;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultOperationConfiguration;
- (id)initWithContainerID:(id)arg1;
- (bool)isManateeContainer;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)registerForDBNotifications;
- (void)setDefaultOperationConfiguration:(id)arg1;
- (void)setManateeContainer:(bool)arg1;
- (void)setRegisterForDBNotifications:(bool)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSubscriptionPushRegistrationAction:(long long)arg1;
- (id)sourceApplicationBundleIdentifier;
- (long long)subscriptionPushRegistrationAction;

@end
