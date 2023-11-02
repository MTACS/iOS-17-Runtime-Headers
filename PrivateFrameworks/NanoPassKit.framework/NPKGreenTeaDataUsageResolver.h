
@interface NPKGreenTeaDataUsageResolver : NSObject <NFHardwareEventListener> {
    bool  _currentlyResolving;
    NFHardwareManager * _hardwareManager;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isNFCDisabled;
}

@property (nonatomic) bool currentlyResolving;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NFHardwareManager *hardwareManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) bool isNFCDisabled;
@property (readonly) Class superclass;

+ (bool)isNFCDisabled;
+ (void)requestFetchNFCState;
+ (void)resolveGreenTeaDataUsageIfNecessary;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_requestFetchNFCState;
- (void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_setupNearfield;
- (bool)currentlyResolving;
- (void)didChangeRadioState:(bool)arg1;
- (id)hardwareManager;
- (id)init;
- (id)internalQueue;
- (bool)isNFCDisabled;
- (void)resolveGreenTeaDataUsageIfNecessary;
- (void)setCurrentlyResolving:(bool)arg1;
- (void)setHardwareManager:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setIsNFCDisabled:(bool)arg1;

@end
