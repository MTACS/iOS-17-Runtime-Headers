
@interface SiriSetup.Defaults : NSObject {
    void enablementConfiguration;
    void enablementFlowConfigurationProvider;
    void enrollmentMode;
    void internalSiriDataSharingStatus;
    void localDataSource;
    void settings;
    void settingsQueue;
    void setupDismissed;
    void voiceProfileManager;
    void voiceTriggerPrefs;
}

- (void).cxx_destruct;
- (id)init;

@end
