
@protocol AFEnablementConfigurationProviderParametersMutating <NSObject>

@required

- (void)setDateEndedResolvingExperiment:(NSDate *)arg1;
- (void)setDateEndedResolvingUserStatus:(NSDate *)arg1;
- (void)setDateStartedResolvingExperiment:(NSDate *)arg1;
- (void)setDateStartedResolvingUserStatus:(NSDate *)arg1;
- (void)setEnablementFlow:(long long)arg1;
- (void)setExperiment:(AFExperiment *)arg1;
- (void)setExperimentFetchError:(NSError *)arg1;
- (void)setNewUser:(bool)arg1;
- (void)setOutputVoiceCountForRecognitionLanguage:(NSDictionary *)arg1;
- (void)setRecognitionLanguageWithMultipleOutputVoicesExists:(bool)arg1;
- (void)setUserStatusFetchError:(NSError *)arg1;

@end
