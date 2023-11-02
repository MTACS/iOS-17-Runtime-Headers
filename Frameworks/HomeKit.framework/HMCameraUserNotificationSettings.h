
@interface HMCameraUserNotificationSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _accessModeChangeNotificationEnabled;
    bool  _reachabilityEventNotificationEnabled;
    NSPredicate * _smartBulletinBoardNotificationCondition;
    bool  _smartBulletinBoardNotificationEnabled;
    long long  _version;
}

@property (getter=isAccessModeChangeNotificationEnabled) bool accessModeChangeNotificationEnabled;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isReachabilityEventNotificationEnabled) bool reachabilityEventNotificationEnabled;
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition;
@property (getter=isSmartBulletinBoardNotificationEnabled) bool smartBulletinBoardNotificationEnabled;
@property (readonly) Class superclass;
@property long long version;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAccessModeChangeNotificationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isReachabilityEventNotificationEnabled;
- (bool)isSmartBulletinBoardNotificationEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (void)setAccessModeChangeNotificationEnabled:(bool)arg1;
- (void)setReachabilityEventNotificationEnabled:(bool)arg1;
- (void)setSmartBulletinBoardNotificationCondition:(id)arg1;
- (void)setSmartBulletinBoardNotificationEnabled:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (id)shortDescription;
- (id)smartBulletinBoardNotificationCondition;
- (long long)version;

@end
