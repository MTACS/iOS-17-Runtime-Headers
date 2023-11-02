
@interface AFSiriDataSharingSensitivityManager : NSObject {
    TRIClient * _client;
}

+ (id)shared;

- (void).cxx_destruct;
- (bool)_isMTEOptOutEnabled;
- (bool)_isOptedOutOfMTE;
- (bool)_isOptedOutOfMTEWithOptInStatus:(long long)arg1 locale:(id)arg2 supportsUOD:(bool)arg3;
- (bool)_isOverrideForMTEOptOutEnabled;
- (bool)_isRequestSensitiveForSensitiveDomainPolicy;
- (bool)_isRequestSensitiveForSensitiveDomainWithSamplingPolicyForLanguage:(id)arg1;
- (bool)_isRequestSensitiveForUnknownPolicy;
- (bool)_isRequestSensitiveWithPolicy:(long long)arg1 optInStatus:(long long)arg2 siriLanguageCode:(id)arg3;
- (bool)_isTrialConfigEnabledWithNamespaceId:(int)arg1 factorName:(id)arg2;
- (bool)_isTrialConfigForLogRedactionForMessagesEnabled;
- (bool)_isTrialConfigForMTEOptOutEnabled;
- (void)_registerUpdateHandler;
- (id)init;
- (bool)isOptedOutOfMTE;
- (bool)isRequestSensitiveWithPolicy:(long long)arg1 optInStatus:(long long)arg2 siriLanguageCode:(id)arg3;

@end
