
@interface HDXPCProcess : NSObject {
    _HKXPCAuditToken * _auditToken;
    NSString * _bundleIdentifier;
    NSString * _containerAppBundleIdentifier;
    NSMutableSet * _droppedEntitlements;
    _HKEntitlements * _entitlements;
    bool  _isExtension;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly, copy) _HKXPCAuditToken *auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *containerAppBundleIdentifier;
@property (nonatomic, readonly) _HKEntitlements *entitlements;
@property (nonatomic, readonly) bool isExtension;
@property (nonatomic, readonly) bool isWidgetKitExtension;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int processIdentifier;

+ (id)currentProcess;
+ (id)processWithConnection:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_pluginBundleForCurrentProcess;
- (id)applicationIdentifier;
- (id)auditToken;
- (id)bundleIdentifier;
- (id)containerAppBundleIdentifier;
- (id)description;
- (void)dropEntitlement:(id)arg1;
- (id)entitlements;
- (bool)hasArrayEntitlement:(id)arg1 containing:(id)arg2;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasRequiredArrayEntitlement:(id)arg1 containing:(id)arg2 error:(id*)arg3;
- (bool)hasRequiredEntitlement:(id)arg1 error:(id*)arg2;
- (id)initWithAuditToken:(id)arg1 entitlements:(id)arg2 isExtension:(bool)arg3 containerAppBundleIdentifier:(id)arg4;
- (bool)isExtension;
- (bool)isWidgetKitExtension;
- (id)name;
- (int)processIdentifier;
- (void)restoreEntitlement:(id)arg1;
- (id)unitTest_copyProcessWithEntitlements:(id)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
