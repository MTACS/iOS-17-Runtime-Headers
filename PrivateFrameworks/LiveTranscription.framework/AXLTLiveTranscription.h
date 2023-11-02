
@interface AXLTLiveTranscription : NSObject <AXLTTranscriberDelegateProtocol> {
    NSMutableDictionary * _dataReceivers;
    <AXLTLiveTranscriptionDelegate> * _delegate;
    bool  _noPunctuation;
    AXLTSpeechTranscriber * _speechTranscriber;
    long long  _taskHint;
    AXLTTestTranscriber * _testTranscriber;
}

@property (nonatomic, retain) NSMutableDictionary *dataReceivers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXLTLiveTranscriptionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool noPunctuation;
@property (nonatomic, retain) AXLTSpeechTranscriber *speechTranscriber;
@property (readonly) Class superclass;
@property (nonatomic) long long taskHint;
@property (nonatomic, retain) AXLTTestTranscriber *testTranscriber;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_pidSupportsCoreMediaNotifications:(int)arg1;
- (id)_receiverKeyForRequestType:(long long)arg1 targetPID:(int)arg2;
- (void)audioInfoData:(id)arg1;
- (id)dataReceivers;
- (id)delegate;
- (id)init;
- (bool)noPunctuation;
- (void)resetTranscribing:(long long)arg1;
- (void)setDataReceivers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNoPunctuation:(bool)arg1;
- (void)setSpeechTranscriber:(id)arg1;
- (void)setTaskHint:(long long)arg1;
- (void)setTestTranscriber:(id)arg1;
- (id)speechTranscriber;
- (bool)startTranscribing:(long long)arg1 callbackBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)startTranscribing:(long long)arg1 excludingPIDs:(id)arg2 callbackBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)startTranscribing:(long long)arg1 targetPID:(int)arg2 callbackBlock:(id /* block */)arg3 audioInfoBlock:(id /* block */)arg4 error:(id*)arg5;
- (bool)startTranscribing:(long long)arg1 targetPID:(int)arg2 callbackBlock:(id /* block */)arg3 error:(id*)arg4;
- (bool)startTranscribing:(long long)arg1 targetPID:(int)arg2 excludingPIDs:(id)arg3 callbackBlock:(id /* block */)arg4 audioInfoBlock:(id /* block */)arg5 error:(id*)arg6;
- (bool)stopTranscribing:(long long)arg1 error:(id*)arg2;
- (bool)stopTranscribing:(long long)arg1 targetPID:(int)arg2 error:(id*)arg3;
- (long long)taskHint;
- (id)testTranscriber;
- (void)transcriberOutputData:(id)arg1;

@end
