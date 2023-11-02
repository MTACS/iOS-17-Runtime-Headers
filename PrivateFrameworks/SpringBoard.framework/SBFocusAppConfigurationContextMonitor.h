
@interface SBFocusAppConfigurationContextMonitor : NSObject <DNDModeConfigurationServiceListener> {
    DNDModeConfigurationService * _configurationService;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_prefixes;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updatePrefixes:(id)arg1;
- (id)init;
- (void)modeConfigurationService:(id)arg1 didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)arg2;
- (id)targetContentIdentifierPrefixForBundleIdentifier:(id)arg1;

@end
