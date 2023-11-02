
@interface HMIHomeKitClient : HMFObject <HMFLogging> {
    unsigned long long  _cachePolicy;
    NSOperationQueue * _homeKitOperationQueue;
    HMHomeManager * _homeManager;
    NSArray * _homes;
    bool  _setup;
}

@property (readonly) unsigned long long cachePolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSOperationQueue *homeKitOperationQueue;
@property (retain) HMHomeManager *homeManager;
@property (readonly) NSArray *homes;
@property (getter=isSetup, readonly) bool setup;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)cachePolicy;
- (id)cameraProfileWithUUID:(id)arg1;
- (id)homeForHMPersonManagerUUID:(id)arg1;
- (id)homeKitOperationQueue;
- (id)homeManager;
- (id)homePersonManagerForHomeUUID:(id)arg1;
- (id)homePersonManagersForCurrentDevice;
- (id)homeWithCameraProfileUUID:(id)arg1;
- (id)homes;
- (id)init;
- (id)initWithCachePolicy:(unsigned long long)arg1;
- (id)initWithNoCaching;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isSetup;
- (id)photosPersonManagerForHomeUUID:(id)arg1 sourceUUID:(id)arg2;
- (void)setHomeManager:(id)arg1;
- (void)setup;

@end
