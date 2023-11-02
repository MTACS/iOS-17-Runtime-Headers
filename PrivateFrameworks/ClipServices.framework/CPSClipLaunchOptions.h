
@interface CPSClipLaunchOptions : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _locationConfirmationGranted;
    NSString * _predefinedBundleID;
    bool  _showsAppAttributionBanner;
    bool  _skipsLaunching;
    NSNumber * _userNotificationGranted;
}

@property (nonatomic, retain) NSNumber *locationConfirmationGranted;
@property (nonatomic, copy) NSString *predefinedBundleID;
@property (nonatomic) bool showsAppAttributionBanner;
@property (nonatomic) bool skipsLaunching;
@property (nonatomic, retain) NSNumber *userNotificationGranted;

+ (id)optionsForAppClipRecord:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)locationConfirmationGranted;
- (id)predefinedBundleID;
- (void)setLocationConfirmationGranted:(id)arg1;
- (void)setPredefinedBundleID:(id)arg1;
- (void)setShowsAppAttributionBanner:(bool)arg1;
- (void)setSkipsLaunching:(bool)arg1;
- (void)setUserNotificationGranted:(id)arg1;
- (bool)showsAppAttributionBanner;
- (bool)skipsLaunching;
- (id)userNotificationGranted;

@end
