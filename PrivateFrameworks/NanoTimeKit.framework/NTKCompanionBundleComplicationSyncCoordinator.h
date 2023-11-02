
@interface NTKCompanionBundleComplicationSyncCoordinator : NSObject <NTKComplicationCollectionObserver> {
    NTKComplicationCollection * _complicationCollection;
    bool  _loaded;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool loaded;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_lock_updateLoaded;
- (void)activeDeviceChanged;
- (void)complicationCollection:(id)arg1 didUpdateComplicationDescriptorsForClient:(id)arg2;
- (void)complicationCollectionDidLoad:(id)arg1;
- (void)complicationCollectionDidReload:(id)arg1;
- (void)dealloc;
- (id)descriptorsForBundleIdentifier:(id)arg1;
- (id)init;
- (bool)loaded;

@end
