
@interface LNPerformActionOperation : NSObject <LNPerformActionExecutorDelegate> {
    LNAction * _action;
    <LNConnectionClientInterface> * _client;
    id /* block */  _completionHandler;
    <LNPerformActionOperationDelegate> * _delegate;
    LNActionExecutorOptions * _options;
    NSProgress * _progress;
    LNSuccessResult * _result;
}

@property (nonatomic, retain) LNAction *action;
@property (nonatomic, readonly) <LNConnectionClientInterface> *client;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) long long connectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <LNPerformActionOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasValidConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) LNActionExecutorOptions *options;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) LNSuccessResult *result;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)client;
- (id /* block */)completionHandler;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (id)identifier;
- (id)initWithAction:(id)arg1 options:(id)arg2 client:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)options;
- (id)progress;
- (void)requestActionConfirmation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestContinueInApp:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestParameterConfirmation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestParameterDisambiguation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestParameterNeedsValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestViewSnippetEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (id)result;
- (void)setAction:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setResult:(id)arg1;
- (void)start;

@end
