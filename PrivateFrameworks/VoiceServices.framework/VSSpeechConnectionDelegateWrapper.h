
@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate> {
    NSMutableArray * _audioRequests;
    NSMutableDictionary * _concurrentSynthesisRequests;
    VSSpeechConnection * _connection;
    VSPresynthesizedAudioRequest * _currentAudioRequest;
    VSSpeechRequest * _currentRequest;
    <VSSpeechConnectionDelegate> * _delegate;
    NSMutableArray * _previewRequests;
    NSMutableArray * _requests;
}

@property (nonatomic, retain) NSMutableArray *audioRequests;
@property (nonatomic, retain) NSMutableDictionary *concurrentSynthesisRequests;
@property (nonatomic) VSSpeechConnection *connection;
@property (nonatomic, retain) VSPresynthesizedAudioRequest *currentAudioRequest;
@property (nonatomic, retain) VSSpeechRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSSpeechConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *previewRequests;
@property (nonatomic, retain) NSMutableArray *requests;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)audioRequest:(id)arg1 didReportInstrumentMetrics:(id)arg2 error:(id)arg3;
- (oneway void)audioRequest:(id)arg1 didStopAtEnd:(bool)arg2 error:(id)arg3;
- (oneway void)audioRequestDidStart:(id)arg1;
- (id)audioRequests;
- (id)concurrentSynthesisRequests;
- (id)connection;
- (id)currentAudioRequest;
- (id)currentRequest;
- (id)delegate;
- (id)getLocalAudioRequest:(id)arg1;
- (id)getLocalPreviewRequest:(id)arg1;
- (id)getLocalRequest:(id)arg1;
- (id)init;
- (oneway void)previewRequestDidStartPlaying:(id)arg1;
- (id)previewRequests;
- (id)requests;
- (void)setAudioRequests:(id)arg1;
- (void)setConcurrentSynthesisRequests:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentAudioRequest:(id)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewRequests:(id)arg1;
- (void)setRequests:(id)arg1;
- (oneway void)speechRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;
- (oneway void)speechRequest:(id)arg1 didReportInstrumentMetrics:(id)arg2;
- (oneway void)speechRequest:(id)arg1 didStartWithMark:(long long)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (oneway void)speechRequest:(id)arg1 didStopWithSuccess:(bool)arg2 phonemesSpoken:(id)arg3 error:(id)arg4;
- (oneway void)speechRequestDidContinue:(id)arg1;
- (oneway void)speechRequestDidPause:(id)arg1;
- (oneway void)speechRequestDidStart:(id)arg1;
- (oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
- (oneway void)synthesisRequest:(id)arg1 didGenerateAudioChunk:(id)arg2;
- (oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;

@end
