
@interface PSUI5GStandaloneCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate> {
    NSMutableDictionary * _NRStatusDict;
    NSMutableDictionary * _SAEnabledDict;
    bool  _cacheNeedsRefresh;
    CoreTelephonyClient * _client;
    PSSimStatusCache * _simStatusCache;
}

@property (retain) NSMutableDictionary *NRStatusDict;
@property (retain) NSMutableDictionary *SAEnabledDict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)NRStatusDict;
- (id)SAEnabledDict;
- (bool)are5GRATModesUserInteractableForContext:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (void)clearCache;
- (void)clearCacheAndRefresh;
- (void)currentDataSimChanged:(id)arg1;
- (void)dealloc;
- (void)fetch5GSupportAndEnabledStatusIfNeeded;
- (void)fetchNRStatus;
- (id)getLogger;
- (unsigned long long)getNSADisableStatusReasonMaskForContext:(id)arg1;
- (unsigned long long)getSADisableStatusReasonMaskForContext:(id)arg1;
- (id)init;
- (id)initPrivate;
- (id)initWithCoreTelephonyClient:(id)arg1 simStatusCache:(id)arg2;
- (bool)is5GSAEnabledForContext:(id)arg1;
- (bool)is5GSASupportedForContext:(id)arg1;
- (bool)is5GSASwitchUserInteractableForContext:(id)arg1;
- (void)notifyClientsNeedRefresh;
- (void)nrDisableStatusChanged:(id)arg1 status:(id)arg2;
- (id)set5GSAEnabled:(bool)arg1 forContext:(id)arg2;
- (void)setNRStatusDict:(id)arg1;
- (void)setSAEnabledDict:(id)arg1;
- (void)willEnterForeground;

@end
