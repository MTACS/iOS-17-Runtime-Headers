
@interface HDProfileManager : NSObject {
    HDDaemon * _daemon;
    HKObserverSet<HDProfileManagerObserver> * _observers;
    NSMutableDictionary * _profiles;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _profilesLock;
}

- (void).cxx_destruct;
- (void)addProfile:(id)arg1;
- (void)addProfileManagerObserver:(id)arg1;
- (void)addProfileManagerObserver:(id)arg1 queue:(id)arg2;
- (id)allProfileIdentifiers;
- (id)createProfileForIdentifier:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 error:(id*)arg4;
- (id)createProfileOfType:(long long)arg1 displayName:(id)arg2 error:(id*)arg3;
- (bool)deleteProfile:(id)arg1 error:(id*)arg2;
- (void)dispatchProfileListDidChange;
- (id)initWithDaemon:(id)arg1;
- (void)invalidateAndWaitWithReason:(id)arg1;
- (id)newProfileWithIdentifier:(id)arg1 daemon:(id)arg2 directoryPath:(id)arg3;
- (id)profileAssociatedWithNRDeviceUUID:(id)arg1;
- (id)profileForIdentifier:(id)arg1;
- (id)profileIdentifierForUUID:(id)arg1;
- (void)removeProfileManagerObserver:(id)arg1;
- (void)unitTest_reloadSecondaryProfiles;

@end
