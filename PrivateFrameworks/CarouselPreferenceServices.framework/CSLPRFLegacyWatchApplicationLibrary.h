
@interface CSLPRFLegacyWatchApplicationLibrary : NSObject <ACXDeviceConnectionDelegate, CSLPRFApplicationLibrary, CSLPRFNanoAppRegistryApplicationSourceDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_cachedApplications;
    NSMutableDictionary * _lock_firstPartyApplications;
    CSLPRFNanoAppRegistryApplicationSource * _nanoAppRegistrySource;
    CSLPRFObservationHelper * _observationHelper;
    NRDevice * _pairedWatch;
}

@property (nonatomic, readonly) NSArray *allApplications;
@property (nonatomic, readonly) NSDictionary *allApplicationsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)allApplications;
- (id)allApplicationsDictionary;
- (void)allApplicationsWithCompletion:(id /* block */)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (void)applicationWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)applicationsUpdated:(id)arg1 onDeviceWithPairingID:(id)arg2;
- (void)dealloc;
- (id)initWithPairedWatch:(id)arg1;
- (void)nanoRegistrySource:(id)arg1 updatedWithAllApplications:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
