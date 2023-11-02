
@interface GEOAPStateFactory : NSObject {
    GEOLogMsgState * _applicationIdentifierState;
    NSString * _countryCode;
    GEOLogMsgState * _deviceIdentifierInternalState;
    GEOLogMsgState * _deviceIdentifierState;
    bool  _isMaps;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSNumber * _offlineDirectionsODSVersion;
    NSNumber * _offlineSearchODSVersion;
}

@property (retain) NSString *countryCode;
@property (nonatomic, readonly) bool isMaps;

+ (id)sharedFactory;

- (void).cxx_destruct;
- (int)_launchActionFromAPLaunchAction:(int)arg1;
- (double)_monthResolution:(double)arg1;
- (int)_privacyAllowedActionFromActualAction:(int)arg1;
- (int)_rapPlaceCardTypeForRawType:(int)arg1;
- (void)_updateOfflineVersionInfo;
- (id)countryCode;
- (id)curatedCollectionRedacted;
- (void)dealloc;
- (void)deviceCountryChanged:(id)arg1;
- (id)impressionObject;
- (id)init;
- (bool)isMaps;
- (int)logMsgStateTypeForType:(long long)arg1;
- (id)mapUIShown;
- (id)mapsPlaceIds;
- (void)offlineDataActiceVersionChanged:(id)arg1;
- (id)placeCardRap;
- (id)placeCardReveal;
- (id)searchResults;
- (void)sessionStateForType:(int)arg1 callback:(id /* block */)arg2;
- (void)sessionStateForType:(int)arg1 onQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)sessionStateForType:(int)arg1 sessionAppId:(id)arg2 onQueue:(id)arg3 callback:(id /* block */)arg4;
- (void)setCountryCode:(id)arg1;
- (id)stateForType:(long long)arg1;

@end
