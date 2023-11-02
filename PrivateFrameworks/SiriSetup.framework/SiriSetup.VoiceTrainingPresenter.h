
@interface SiriSetup.VoiceTrainingPresenter : NSObject <AFMyriadDelegate, SRSTrainingManagerDelegate> {
    void AVVCRetryCount;
    void badMicRetryCount;
    void dataSource;
    void dataSourceWriter;
    void delegate;
    void myriadCoordinator;
    void page;
    void presentingViewController;
    void trainingInstructions;
    void trainingManager;
    void trainingSessionId;
    void trainingState;
    void viewModel;
    void viewStyle;
    void voiceProfileManager;
}

- (void).cxx_destruct;
- (void)audioLevelDidChange:(float)arg1;
- (id)init;

@end
