
@interface SiriSetup.LocalDataSourceWriter : NSObject {
    void id;
    void setupDismissed;
    void siriDataSharingStatus;
    void siriEnabled;
    void siriInCallEnabled;
    void siriVoice;
    void voiceTriggerEnabled;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
