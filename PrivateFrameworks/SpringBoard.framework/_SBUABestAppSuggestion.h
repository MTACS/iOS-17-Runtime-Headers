
@interface _SBUABestAppSuggestion : SBBestAppSuggestion {
    UABestAppSuggestion * _appSuggestion;
}

- (void).cxx_destruct;
- (id)activityType;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (bool)isCallContinuitySuggestion;
- (bool)isEqual:(id)arg1;
- (bool)isHandoff;
- (bool)isLocallyGeneratedSuggestion;
- (bool)isLocationBasedSuggestion;
- (bool)isNotificationSuggestion;
- (bool)isOpenURLSuggestion;
- (id)lastUpdateTime;
- (id)originatingDeviceIdentifier;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)uniqueIdentifier;

@end
