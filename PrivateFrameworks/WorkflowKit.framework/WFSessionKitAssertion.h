
@interface WFSessionKitAssertion : NSObject <WFActionExtendedOperation> {
    void additionalFailureHandlers;
    void additionalResultHandlers;
    void cancellables;
    void failureHandler;
    void purpose;
    void queue;
    void resultHandler;
    void state;
}

@property (nonatomic, copy) id /* block */ failureHandler;
@property (nonatomic, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)addCompletionHandlerIfRunning:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id /* block */)failureHandler;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id /* block */)resultHandler;
- (void)setFailureHandler:(id /* block */)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)startTimeoutTimer;
- (bool)takeWithError:(id*)arg1;

@end
