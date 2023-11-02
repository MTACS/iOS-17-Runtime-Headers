
@interface SpeakThisServices : NSObject <AXUIClientDelegate> {
    AXUIClient * _client;
    id /* block */  _errorHandlerFromPriorShowControllerAttempt;
    bool  _springBoardReady;
    bool  _triedToShowSpeechControllerBeforeSBReady;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) id /* block */ errorHandlerFromPriorShowControllerAttempt;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool springBoardReady;
@property (readonly) Class superclass;
@property (nonatomic) bool triedToShowSpeechControllerBeforeSBReady;

+ (id)sharedInstance;
+ (id)speakThisMessageKeyKBFrame;

- (void).cxx_destruct;
- (void)_checkSpringBoardStarted;
- (id)_client;
- (id)_clientIdentifier;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_descriptionForMessageIdentifier:(unsigned long long)arg1;
- (void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(id /* block */)arg3;
- (void)_sendMessageWithIdentifier:(unsigned long long)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)didCancelSpeakThisErrorHandler:(id /* block */)arg1;
- (id /* block */)errorHandlerFromPriorShowControllerAttempt;
- (void)fastForward:(id /* block */)arg1;
- (void)hideSpeechController:(id /* block */)arg1;
- (id)init;
- (void)keyboardFrameWillUpdate:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)pauseSpeaking:(id /* block */)arg1;
- (void)resumeSpeaking:(id /* block */)arg1;
- (void)rewind:(id /* block */)arg1;
- (void)setErrorHandlerFromPriorShowControllerAttempt:(id /* block */)arg1;
- (void)setSpringBoardReady:(bool)arg1;
- (void)setTriedToShowSpeechControllerBeforeSBReady:(bool)arg1;
- (void)showSpeechController:(id /* block */)arg1;
- (void)speakFaster:(id /* block */)arg1;
- (void)speakSlower:(id /* block */)arg1;
- (void)speakThisWithOptions:(long long)arg1 errorHandler:(id /* block */)arg2;
- (void)speakThisWithOptions:(long long)arg1 forAppWithBundleID:(id)arg2 errorHandler:(id /* block */)arg3;
- (void)speakThisWithOptions:(long long)arg1 forAppWithBundleID:(id)arg2 rootElementAccessibilityIdentifier:(id)arg3 errorHandler:(id /* block */)arg4;
- (void)speakThisWithOptions:(long long)arg1 forSceneID:(id)arg2 errorHandler:(id /* block */)arg3;
- (void)speakThisWithOptions:(long long)arg1 useAppAtPoint:(struct CGPoint { double x1; double x2; })arg2 errorHandler:(id /* block */)arg3;
- (bool)springBoardReady;
- (void)toggleSpeaking:(id /* block */)arg1;
- (bool)triedToShowSpeechControllerBeforeSBReady;
- (void)updateSpeakingRateTo:(long long)arg1 errorHandler:(id /* block */)arg2;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4;

@end
