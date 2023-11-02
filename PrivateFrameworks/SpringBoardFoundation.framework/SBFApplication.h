
@interface SBFApplication : NSObject {
    NSNumber * _appStoreItemID;
    NSString * _applicationBundleIdentifier;
    SBSApplicationShortcutService * _applicationShortcutService;
    SBSApplicationShortcutServiceFetchResult * _applicationShortcutServiceFetchResult;
    double  _applicationShortcutServiceFetchResultExpirationReferenceTime;
    NSString * _applicationShortcutWidgetBundleIdentifier;
    NSURL * _bundleURL;
    NSString * _displayName;
    bool  _systemOrInternalApplication;
}

@property (nonatomic, readonly) NSNumber *appStoreItemID;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *applicationShortcutWidgetBundleIdentifier;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *dynamicApplicationShortcutItems;
@property (nonatomic, readonly) NSArray *staticApplicationShortcutItems;
@property (getter=isSystemOrInternalApplication, nonatomic, readonly) bool systemOrInternalApplication;

- (void).cxx_destruct;
- (void)_updateApplicationShortcutServiceFetchResult;
- (id)appStoreItemID;
- (id)applicationBundleIdentifier;
- (id)applicationShortcutWidgetBundleIdentifier;
- (id)bundleURL;
- (void)dealloc;
- (id)displayName;
- (id)dynamicApplicationShortcutItems;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (bool)isSystemOrInternalApplication;
- (id)staticApplicationShortcutItems;

@end
