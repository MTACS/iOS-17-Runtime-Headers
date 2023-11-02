
@interface INExecutionFrameworkMapper : NSObject {
    NSMutableDictionary * _appToExtensionIdentifiers;
    bool  _filled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly, copy) NSMutableDictionary *_appToExtensionIdentifiers;
@property (nonatomic, readonly) bool _filled;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } _lock;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addExtensionBundleIdentifier:(id)arg1 forAppBundleIdentifier:(id)arg2;
- (id)_appToExtensionIdentifiers;
- (bool)_filled;
- (struct os_unfair_lock_s { unsigned int x1; })_lock;
- (id)appBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;
- (id)extensionBundleIdentifiersForSystemAppIdentifier:(id)arg1;
- (id)init;
- (void)installedApplicationsDidChange:(id)arg1;
- (id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;
- (void)loadSystemExtensionInformation;
- (void)reset;

@end
