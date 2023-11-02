
@interface CPSAppClipRecord : NSObject {
    NSString * _bundleID;
    id  _debug_fullApplicationIcon;
    NSString * _fullApplicationCaption;
    NSString * _fullApplicationName;
    NSURL * _fullApplicationStoreURL;
    double  _lastInstallTime;
    double  _lastProxCardLaunchTime;
    double  _lastVersionCheckTime;
    NSNumber * _locationConfirmationGranted;
    long long  _locationConfirmationState;
    NSNumber * _userNotificationGranted;
}

@property (nonatomic, copy) NSString *bundleID;
@property (setter=debug_setFullApplicationIcon:, nonatomic, retain) id debug_fullApplicationIcon;
@property (nonatomic, copy) NSString *fullApplicationCaption;
@property (nonatomic, copy) NSString *fullApplicationName;
@property (nonatomic, retain) NSURL *fullApplicationStoreURL;
@property (nonatomic) double lastInstallTime;
@property (nonatomic) double lastProxCardLaunchTime;
@property (nonatomic) double lastVersionCheckTime;
@property (nonatomic, copy) NSNumber *locationConfirmationGranted;
@property (nonatomic) long long locationConfirmationState;
@property (nonatomic, copy) NSNumber *userNotificationGranted;

// Image: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices

- (void).cxx_destruct;
- (id)bundleID;
- (id)debug_fullApplicationIcon;
- (void)debug_setFullApplicationIcon:(id)arg1;
- (id)fullApplicationCaption;
- (id)fullApplicationName;
- (id)fullApplicationStoreURL;
- (id)initWithBundleID:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1 bundleID:(id)arg2;
- (double)lastInstallTime;
- (double)lastProxCardLaunchTime;
- (double)lastVersionCheckTime;
- (id)locationConfirmationGranted;
- (long long)locationConfirmationState;
- (void)setBundleID:(id)arg1;
- (void)setFullApplicationCaption:(id)arg1;
- (void)setFullApplicationName:(id)arg1;
- (void)setFullApplicationStoreURL:(id)arg1;
- (void)setLastInstallTime:(double)arg1;
- (void)setLastProxCardLaunchTime:(double)arg1;
- (void)setLastVersionCheckTime:(double)arg1;
- (void)setLocationConfirmationGranted:(id)arg1;
- (void)setLocationConfirmationState:(long long)arg1;
- (void)setUserNotificationGranted:(id)arg1;
- (id)userNotificationGranted;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

+ (void)getApplicationIconForBundleIdentifier:(id)arg1 imageDescriptor:(id)arg2 resultHandler:(id /* block */)arg3;

- (void)getApplicationIconForImageDescriptor:(id)arg1 resultHandler:(id /* block */)arg2;

@end
