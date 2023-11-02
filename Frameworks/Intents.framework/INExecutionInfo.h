
@interface INExecutionInfo : NSObject <NSCopying> {
    INAppInfo * _appInfo;
    NSURL * _containingAppBundleURL;
    NSString * _displayableAppBundleId;
    NSString * _extensionBundleId;
    NSString * _launchableAppBundleId;
}

@property (nonatomic, readonly) INAppInfo *_appInfo;
@property (nonatomic, readonly) LSApplicationRecord *_applicationRecord;
@property (nonatomic, readonly) bool canRunOnLocalDevice;
@property (nonatomic, readonly, copy) NSURL *containingAppBundleURL;
@property (nonatomic, readonly, copy) NSString *displayableAppBundleId;
@property (nonatomic, readonly, copy) NSString *extensionBundleId;
@property (nonatomic, readonly, copy) NSString *launchableAppBundleId;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_appInfo;
- (id)_applicationRecord;
- (id)_initWithLaunchableAppBundleId:(id)arg1 displayableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4;
- (bool)canRunOnLocalDevice;
- (id)containingAppBundleURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayableAppBundleId;
- (id)extensionBundleId;
- (id)launchableAppBundleId;

@end
