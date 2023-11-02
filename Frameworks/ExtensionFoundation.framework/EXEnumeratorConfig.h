
@interface EXEnumeratorConfig : NSObject <EXEnumeratorConfig> {
    NSDictionary * _compatibilityExtensionPointAllowList;
    NSURL * _extensionPointsConfigURL;
    NSDictionary * _legacyExtensionPointAllowList;
    NSURL * _rootURL;
    NSURL * _xpcExtensionPointsCache;
    NSURL * _xpcExtensionsCache;
}

@property (readonly) NSDictionary *compatibilityExtensionPointAllowList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSURL *extensionPointsConfigURL;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *legacyExtensionPointAllowList;
@property (readonly) NSURL *rootURL;
@property (readonly) Class superclass;
@property (readonly) NSURL *xpcExtensionPointsCache;
@property (readonly) NSURL *xpcExtensionsCache;

- (void).cxx_destruct;
- (id)compatibilityExtensionPointAllowList;
- (id)extensionPointsConfigURL;
- (id)init;
- (id)legacyExtensionPointAllowList;
- (id)rootURL;
- (id)xpcExtensionPointsCache;
- (id)xpcExtensionsCache;

@end
