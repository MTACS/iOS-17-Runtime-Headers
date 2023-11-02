
@interface _WKWebExtension : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtension> { 
        struct type { 
            unsigned char __lx[232]; 
        } data; 
    }  _webExtension;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) bool _backgroundContentIsServiceWorker;
@property (nonatomic, readonly) bool _backgroundContentUsesModules;
@property (nonatomic, readonly) void*_webExtension;
@property (nonatomic, readonly, copy) NSSet *allRequestedMatchPatterns;
@property (nonatomic, readonly) bool backgroundContentIsPersistent;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSLocale *defaultLocale;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayActionLabel;
@property (nonatomic, readonly, copy) NSString *displayDescription;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *displayShortName;
@property (nonatomic, readonly, copy) NSString *displayVersion;
@property (nonatomic, readonly, copy) NSArray *errors;
@property (nonatomic, readonly) bool hasBackgroundContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *manifest;
@property (nonatomic, readonly) double manifestVersion;
@property (nonatomic, readonly, copy) NSSet *optionalPermissionMatchPatterns;
@property (nonatomic, readonly, copy) NSSet *optionalPermissions;
@property (nonatomic, readonly, copy) NSSet *requestedPermissionMatchPatterns;
@property (nonatomic, readonly, copy) NSSet *requestedPermissions;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)extensionWithAppExtensionBundle:(id)arg1;
+ (id)extensionWithResourceBaseURL:(id)arg1;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (bool)_backgroundContentIsServiceWorker;
- (bool)_backgroundContentUsesModules;
- (bool)_hasStaticInjectedContentForURL:(id)arg1;
- (id)_initWithManifestDictionary:(id)arg1;
- (id)_initWithManifestDictionary:(id)arg1 resources:(id)arg2;
- (id)_initWithResources:(id)arg1;
- (void*)_webExtension;
- (id)actionIconForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)allRequestedMatchPatterns;
- (bool)backgroundContentIsPersistent;
- (void)dealloc;
- (id)defaultLocale;
- (id)displayActionLabel;
- (id)displayDescription;
- (id)displayName;
- (id)displayShortName;
- (id)displayVersion;
- (id)errors;
- (bool)hasBackgroundContent;
- (id)iconForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithAppExtensionBundle:(id)arg1 error:(id*)arg2;
- (id)initWithResourceBaseURL:(id)arg1 error:(id*)arg2;
- (id)manifest;
- (double)manifestVersion;
- (id)optionalPermissionMatchPatterns;
- (id)optionalPermissions;
- (id)requestedPermissionMatchPatterns;
- (id)requestedPermissions;
- (bool)supportsManifestVersion:(double)arg1;
- (id)version;

@end
