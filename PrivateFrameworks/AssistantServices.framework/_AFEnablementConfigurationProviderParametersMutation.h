
@interface _AFEnablementConfigurationProviderParametersMutation : NSObject <AFEnablementConfigurationProviderParametersMutating> {
    AFEnablementConfigurationProviderParameters * _base;
    NSDate * _dateEndedResolvingExperiment;
    NSDate * _dateEndedResolvingUserStatus;
    NSDate * _dateStartedResolvingExperiment;
    NSDate * _dateStartedResolvingUserStatus;
    long long  _enablementFlow;
    AFExperiment * _experiment;
    NSError * _experimentFetchError;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasEnablementFlow : 1; 
        unsigned int hasNewUser : 1; 
        unsigned int hasUserStatusFetchError : 1; 
        unsigned int hasDateStartedResolvingUserStatus : 1; 
        unsigned int hasDateEndedResolvingUserStatus : 1; 
        unsigned int hasExperiment : 1; 
        unsigned int hasExperimentFetchError : 1; 
        unsigned int hasDateStartedResolvingExperiment : 1; 
        unsigned int hasDateEndedResolvingExperiment : 1; 
        unsigned int hasOutputVoiceCountForRecognitionLanguage : 1; 
        unsigned int hasRecognitionLanguageWithMultipleOutputVoicesExists : 1; 
    }  _mutationFlags;
    bool  _newUser;
    NSDictionary * _outputVoiceCountForRecognitionLanguage;
    bool  _recognitionLanguageWithMultipleOutputVoicesExists;
    NSError * _userStatusFetchError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getDateEndedResolvingExperiment;
- (id)getDateEndedResolvingUserStatus;
- (id)getDateStartedResolvingExperiment;
- (id)getDateStartedResolvingUserStatus;
- (long long)getEnablementFlow;
- (id)getExperiment;
- (id)getExperimentFetchError;
- (bool)getNewUser;
- (id)getOutputVoiceCountForRecognitionLanguage;
- (bool)getRecognitionLanguageWithMultipleOutputVoicesExists;
- (id)getUserStatusFetchError;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDateEndedResolvingExperiment:(id)arg1;
- (void)setDateEndedResolvingUserStatus:(id)arg1;
- (void)setDateStartedResolvingExperiment:(id)arg1;
- (void)setDateStartedResolvingUserStatus:(id)arg1;
- (void)setEnablementFlow:(long long)arg1;
- (void)setExperiment:(id)arg1;
- (void)setExperimentFetchError:(id)arg1;
- (void)setNewUser:(bool)arg1;
- (void)setOutputVoiceCountForRecognitionLanguage:(id)arg1;
- (void)setRecognitionLanguageWithMultipleOutputVoicesExists:(bool)arg1;
- (void)setUserStatusFetchError:(id)arg1;

@end
