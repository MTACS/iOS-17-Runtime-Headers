
@interface CRCarPlayAppPolicyEvaluator : NSObject {
    CRCarPlayAppDenylist * _denylist;
    bool  _evaluatorWantsGeoManagement;
    NSObject<OS_dispatch_queue> * _geoQueue;
    bool  _geoSupported;
    bool  _geo_queue_geoSupported;
    CARSessionStatus * _sessionStatus;
}

@property (nonatomic, retain) CRCarPlayAppDenylist *denylist;
@property (nonatomic) bool evaluatorWantsGeoManagement;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *geoQueue;
@property (getter=isGeoSupported, nonatomic) bool geoSupported;
@property (nonatomic) bool geo_queue_geoSupported;

+ (id)_carIntentIdentifiers;
+ (id)allIntentIdentifiers;

- (void).cxx_destruct;
- (bool)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2;
- (bool)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2;
- (unsigned long long)_applicationCategoryForAppDeclaration:(id)arg1 policy:(id)arg2;
- (bool)_checkIfDeclaration:(id)arg1 supportsIntents:(id)arg2 requireAllIntents:(bool)arg3;
- (id)_vehicleProtocolsForCertificateSerial:(id)arg1;
- (bool)_vehicleProtocolsIntersectAppProtocols:(id)arg1 certificateSerial:(id)arg2;
- (id)currentSession;
- (id)denylist;
- (id)effectivePolicyForAppDeclaration:(id)arg1;
- (id)effectivePolicyForAppDeclaration:(id)arg1 inVehicleWithCertificateSerial:(id)arg2;
- (bool)evaluatorWantsGeoManagement;
- (void)fetchApplicationBundleIdentifiersForCarIntents:(id /* block */)arg1;
- (id)geoQueue;
- (bool)geo_queue_geoSupported;
- (id)init;
- (bool)isGeoSupported;
- (void)setDenylist:(id)arg1;
- (void)setEvaluatorWantsGeoManagement:(bool)arg1;
- (void)setGeoQueue:(id)arg1;
- (void)setGeoSupported:(bool)arg1;
- (void)setGeo_queue_geoSupported:(bool)arg1;
- (void)setWantsGeoSupported;
- (void)updateGeoSupported;
- (void)updateGeoSupportedWithCompletion:(id /* block */)arg1;

@end
