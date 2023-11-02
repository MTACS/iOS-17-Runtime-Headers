
@interface SRUIFSpeechRequestHandler : NSObject {
    id /* block */  _continuePendingRequest;
    NSObject<OS_dispatch_group> * _currentSpeechRequestGroup;
    <SRUIFSpeechRequestHandlerDelegate> * _delegate;
    bool  _sendContextBeforeContinuingSpeechRequest;
    NSMutableSet * _speechRequestGroupGraveyard;
}

@property (getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:, nonatomic, retain) NSObject<OS_dispatch_group> *currentSpeechRequestGroup;
@property (nonatomic) <SRUIFSpeechRequestHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_continuePendingSpeechRequest;
- (id)_currentSpeechRequestGroup;
- (void)_performOnCurrentSpeechDipatchGroup:(id /* block */)arg1;
- (void)_setCurrentSpeechRequestGroup:(id)arg1;
- (void)cancelSpeechRequest;
- (id)currentSpeechRequestDispatchGroup;
- (id)delegate;
- (void)discardCurrentSpeechGroup;
- (id)initWithDelegate:(id)arg1;
- (void)nonSpeechRequestWillBegin;
- (id)prepareForNewSpeechRequest;
- (void)setDelegate:(id)arg1;
- (void)speechRecordingDidFail;
- (void)speechRecordingWillBegin;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)startSpeechRequestWithSpeechRequestOptions:(id)arg1 instrumentationTurn:(id)arg2 isInitialBringUp:(bool)arg3 completion:(id /* block */)arg4;
- (void)stopSpeechRequest;
- (void)stopSpeechRequestWithOptions:(id)arg1;
- (void)updateSpeechRequestOptions:(id)arg1;

@end
