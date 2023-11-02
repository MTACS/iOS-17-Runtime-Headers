
@interface _WKWebExtensionContext : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionContext> { 
        struct type { 
            unsigned char __lx[328]; 
        } data; 
    }  _webExtensionContext;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) NSURL *_backgroundContentURL;
@property (nonatomic, readonly) WKWebView *_backgroundWebView;
@property (getter=_inTestingMode, setter=_setTestingMode:, nonatomic) bool _testingMode;
@property (nonatomic, readonly) void*_webExtensionContext;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, readonly, copy) NSSet *currentPermissionMatchPatterns;
@property (nonatomic, readonly, copy) NSSet *currentPermissions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *deniedPermissionMatchPatterns;
@property (nonatomic, copy) NSDictionary *deniedPermissions;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *grantedPermissionMatchPatterns;
@property (nonatomic, copy) NSDictionary *grantedPermissions;
@property (nonatomic, readonly) bool hasAccessToAllHosts;
@property (nonatomic, readonly) bool hasAccessToAllURLs;
@property (readonly) unsigned long long hash;
@property (getter=isInspectable, nonatomic) bool inspectable;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic) bool requestedOptionalAccessToAllHosts;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) _WKWebExtension *webExtension;
@property (nonatomic, readonly) _WKWebExtensionController *webExtensionController;

+ (id)contextForExtension:(id)arg1;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_backgroundContentURL;
- (id)_backgroundWebView;
- (bool)_inTestingMode;
- (void)_setTestingMode:(bool)arg1;
- (void*)_webExtensionContext;
- (id)baseURL;
- (id)currentPermissionMatchPatterns;
- (id)currentPermissions;
- (void)dealloc;
- (id)deniedPermissionMatchPatterns;
- (id)deniedPermissions;
- (id)grantedPermissionMatchPatterns;
- (id)grantedPermissions;
- (bool)hasAccessToAllHosts;
- (bool)hasAccessToAllURLs;
- (bool)hasAccessToURL:(id)arg1;
- (bool)hasAccessToURL:(id)arg1 inTab:(id)arg2;
- (bool)hasActiveUserGestureInTab:(id)arg1;
- (bool)hasInjectedContentForURL:(id)arg1;
- (bool)hasPermission:(id)arg1;
- (bool)hasPermission:(id)arg1 inTab:(id)arg2;
- (id)initForExtension:(id)arg1;
- (bool)isInspectable;
- (bool)isLoaded;
- (long long)permissionStatusForMatchPattern:(id)arg1;
- (long long)permissionStatusForMatchPattern:(id)arg1 inTab:(id)arg2;
- (long long)permissionStatusForPermission:(id)arg1;
- (long long)permissionStatusForPermission:(id)arg1 inTab:(id)arg2;
- (long long)permissionStatusForURL:(id)arg1;
- (long long)permissionStatusForURL:(id)arg1 inTab:(id)arg2;
- (bool)requestedOptionalAccessToAllHosts;
- (void)setBaseURL:(id)arg1;
- (void)setDeniedPermissionMatchPatterns:(id)arg1;
- (void)setDeniedPermissions:(id)arg1;
- (void)setGrantedPermissionMatchPatterns:(id)arg1;
- (void)setGrantedPermissions:(id)arg1;
- (void)setInspectable:(bool)arg1;
- (void)setPermissionStatus:(long long)arg1 forMatchPattern:(id)arg2;
- (void)setPermissionStatus:(long long)arg1 forMatchPattern:(id)arg2 expirationDate:(id)arg3;
- (void)setPermissionStatus:(long long)arg1 forPermission:(id)arg2;
- (void)setPermissionStatus:(long long)arg1 forPermission:(id)arg2 expirationDate:(id)arg3;
- (void)setPermissionStatus:(long long)arg1 forURL:(id)arg2;
- (void)setPermissionStatus:(long long)arg1 forURL:(id)arg2 expirationDate:(id)arg3;
- (void)setRequestedOptionalAccessToAllHosts:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (id)webExtension;
- (id)webExtensionController;

@end
