
@interface TIStreamingCandidateHandler : NSObject <TICandidateHandler> {
    id /* block */  _candidateHandler;
    id /* block */  _candidateResultSetHandler;
    <TIClientProxy> * _clientProxy;
    bool  _didCallHandler;
    TIKeyboardInputManagerBase * _inputManager;
    TIKeyboardState * _keyboardState;
    <TIKeyboardInputManagerLogging> * _logger;
    TICandidateRequestToken * _requestToken;
    unsigned long long  _status;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly, copy) id /* block */ candidateHandler;
@property (nonatomic, readonly, copy) id /* block */ candidateResultSetHandler;
@property (nonatomic, readonly) <TIClientProxy> *clientProxy;
@property (nonatomic, retain) TIKeyboardState *keyboardState;
@property (nonatomic) <TIKeyboardInputManagerLogging> *logger;
@property (nonatomic, readonly) TICandidateRequestToken *requestToken;

- (void).cxx_destruct;
- (bool)asynchronous;
- (id /* block */)candidateHandler;
- (id /* block */)candidateResultSetHandler;
- (id)clientProxy;
- (void)close;
- (void)dealloc;
- (id)initWithClientProxy:(id)arg1 keyboardState:(id)arg2 requestToken:(id)arg3 logger:(id)arg4 inputManager:(id)arg5 candidateHandler:(id /* block */)arg6;
- (id)initWithClientProxy:(id)arg1 keyboardState:(id)arg2 requestToken:(id)arg3 logger:(id)arg4 inputManager:(id)arg5 candidateHandler:(id /* block */)arg6 candidateResultSetHandler:(id /* block */)arg7;
- (id)initWithClientProxy:(id)arg1 keyboardState:(id)arg2 requestToken:(id)arg3 logger:(id)arg4 inputManager:(id)arg5 candidateResultSetHandler:(id /* block */)arg6;
- (id)keyboardState;
- (id)logger;
- (void)open;
- (void)pushCandidateResultSet:(id)arg1;
- (void)pushCandidates:(id)arg1;
- (id)requestToken;
- (void)setKeyboardState:(id)arg1;
- (void)setLogger:(id)arg1;

@end
