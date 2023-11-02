
@interface CSVoiceTriggerUserSelectedPhrase : NSObject {
    <CSVoiceTriggerUserSelectedPhraseDelegate> * _delegate;
    NSUUID * _endpointDeviceId;
    bool  _mphSelected;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _uSelectedPhraseType;
    VTPreferences * _vtPrefrences;
}

@property (nonatomic) <CSVoiceTriggerUserSelectedPhraseDelegate> *delegate;
@property (nonatomic, retain) NSUUID *endpointDeviceId;
@property (nonatomic) bool mphSelected;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long uSelectedPhraseType;
@property (nonatomic, retain) VTPreferences *vtPrefrences;

- (void).cxx_destruct;
- (unsigned long long)_fetchUserSelectedPhraseType;
- (bool)_isMultiPhrase:(unsigned long long)arg1;
- (void)_registerForNotification;
- (void)dealloc;
- (id)delegate;
- (id)endpointDeviceId;
- (id)initWithEndpointId:(id)arg1;
- (id)initWithEndpointId:(id)arg1 vtPreferences:(id)arg2;
- (bool)mphSelected;
- (bool)multiPhraseSelected;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setEndpointDeviceId:(id)arg1;
- (void)setMphSelected:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setUSelectedPhraseType:(unsigned long long)arg1;
- (void)setVtPrefrences:(id)arg1;
- (unsigned long long)uSelectedPhraseType;
- (unsigned long long)userSelectedPhraseType;
- (void)vtPhraseTypeDidChangeNotificationReceived;
- (id)vtPrefrences;

@end
