
@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFLocalSpeechRecognitionDelegate, SFSpeechRecognitionBufferDelegate> {
    bool  _cancelled;
    bool  _completed;
    AFDictationConnection * _dictationConnection;
    NSError * _error;
    NSOperationQueue * _externalQueue;
    bool  _finishing;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSString * _languageCode;
    SFSpeechRecognitionRequest * _request;
    NSString * _requestIdentifier;
    bool  _running;
    SFLocalSpeechRecognitionClient * _sflsrClient;
    long long  _taskHint;
}

@property (nonatomic, readonly) long long _taskHint;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (getter=isFinishing, nonatomic, readonly) bool finishing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4;
- (long long)_taskHint;
- (void)addRecordedSpeechSampleData:(id)arg1;
- (float)averagePower;
- (void)cancel;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (id)error;
- (void)finish;
- (bool)isCancelled;
- (bool)isFinishing;
- (void)localSpeechRecognitionClient:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)localSpeechRecognitionClient:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)arg1;
- (void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)arg1;
- (float)peakPower;
- (id)requestIdentifier;
- (long long)state;
- (void)stopSpeech;

@end
