
@interface PPSettingsGuardedData : NSObject {
    NSString * _abGroupOverride;
    bool  _appConnectionsLocationsEnabled;
    double  _cachedWeightMultiplier;
    NSSet * _cloudKitDisabledBundleIdentifiers;
    NSSet * _donationDisabledBundleIdentifiers;
    NSMutableDictionary * _donationDisabledChangeHandlers;
    NSDate * _entitiesBackfillTimestamp;
    NSData * _entitiesMappingTrieSha256;
    int  _nextChangeHandlerToken;
    NSMutableDictionary * _queryPlanLoggingChangeHandlers;
}

- (void).cxx_destruct;

@end
