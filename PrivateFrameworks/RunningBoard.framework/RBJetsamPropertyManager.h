
@interface RBJetsamPropertyManager : NSObject <RBJetsamPropertyManaging> {
    NSDictionary * _angels;
    id  _angelsGlobal;
    NSDictionary * _applications;
    id  _applicationsGlobal;
    NSDictionary * _applicationsSys;
    id  _applicationsSysGlobal;
    NSDictionary * _daemons;
    id  _daemonsGlobal;
    <RBEntitlementManaging> * _entitlementManager;
    NSDictionary * _extensionPoints;
    id  _extensionPointsGlobal;
    NSDictionary * _externalExtensionPoints;
    id  _externalExtensionPointsGlobal;
    NSDictionary * _xpcServices;
    id  _xpcServicesGlobal;
    NSDictionary * _xpcServicesSys;
    id  _xpcServicesSysGlobal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)testJetsamProperties;
+ (int)testTaskLimitForPid:(int)arg1;
+ (id)unmanagedJetsamProperties;

- (void).cxx_destruct;
- (id)initWithEntitlementManager:(id)arg1;
- (id)initWithEntitlementManager:(id)arg1 properties:(id)arg2;
- (id)jetsamPropertiesForProcess:(int)arg1 identity:(id)arg2 bundleProperties:(id)arg3 isPlatformBinary:(bool)arg4;

@end
