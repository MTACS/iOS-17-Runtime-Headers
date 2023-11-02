
@interface EDDifferentialPrivacyReporter : NSObject <EDMessageChangeHookResponder> {
    EDMailDynamicDataAsset * _mailDynamicData;
    <EMUserProfileProvider> * _profileProvider;
    id /* block */  _recordingHandler;
    NSString * _recordingKey;
    NSObject<OS_dispatch_queue> * _recordingQueue;
    _MSTTLReference * _userDomains;
}

@property (nonatomic, retain) EDMailDynamicDataAsset *_mailDynamicData;
@property (nonatomic) <EMUserProfileProvider> *_profileProvider;
@property (nonatomic, retain) NSString *_recordingKey;
@property (nonatomic, retain) _MSTTLReference *_userDomains;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ recordingHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordingQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isUserAccountDomain:(id)arg1;
- (id)_localeIdentifier;
- (id)_mailDynamicData;
- (id)_profileProvider;
- (void)_recordSenders:(id)arg1;
- (id)_recordingKey;
- (bool)_shouldRecordMailbox:(id)arg1;
- (id)_userDomains;
- (id)initWithUserProfileProvider:(id)arg1;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (id /* block */)recordingHandler;
- (id)recordingQueue;
- (void)reportSenderDomainForMessages:(id)arg1;
- (void)setRecordingHandler:(id /* block */)arg1;
- (void)setRecordingQueue:(id)arg1;
- (void)set_mailDynamicData:(id)arg1;
- (void)set_profileProvider:(id)arg1;
- (void)set_recordingKey:(id)arg1;
- (void)set_userDomains:(id)arg1;

@end
