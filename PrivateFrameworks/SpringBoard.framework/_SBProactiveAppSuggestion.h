
@interface _SBProactiveAppSuggestion : SBBestAppSuggestion {
    ATXProactiveSuggestion * _appSuggestion;
}

@property (nonatomic, readonly) ATXProactiveSuggestion *appSuggestion;
@property (nonatomic, readonly) NSUUID *resultUUID;

- (void).cxx_destruct;
- (id)appSuggestion;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)initWithAppSuggestion:(id)arg1;
- (bool)isBluetoothAudioPrediction;
- (bool)isBluetoothPrediction;
- (bool)isCarPlayPrediction;
- (bool)isEqual:(id)arg1;
- (bool)isFirstWakePrediction;
- (bool)isHeadphonesPrediction;
- (bool)isLocallyGeneratedSuggestion;
- (bool)isLocationBasedSuggestion;
- (bool)isPrediction;
- (id)resultUUID;

@end
