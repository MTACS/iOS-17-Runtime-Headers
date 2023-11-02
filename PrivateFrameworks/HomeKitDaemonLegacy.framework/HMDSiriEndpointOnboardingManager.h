
@interface HMDSiriEndpointOnboardingManager : NSObject {
    <HMDSiriEndpointOnboardingManagerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _onboardingSelections;
    NSMutableDictionary * _onboardingUserUUID;
}

@property <HMDSiriEndpointOnboardingManagerDataSource> *dataSource;

- (void).cxx_destruct;
- (void)_applyOnboardingSelections:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 userUUID:(id)arg4 cacheKey:(id)arg5 completion:(id /* block */)arg6;
- (void)_enableUserListeningHistoryForHomeUUID:(id)arg1 accessoryUUID:(id)arg2 userUUID:(id)arg3;
- (void)_setNeedsOnboardingCompleteWitHomeUUID:(id)arg1 accessoryUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2;
- (void)applyOnboardingSelections:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 userUUID:(id)arg4 completion:(id /* block */)arg5;
- (id)dataSource;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleCompositeSettingsControllerConfigured:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (bool)readyToApplyOnboardingSelectionsWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2;
- (void)setDataSource:(id)arg1;

@end
