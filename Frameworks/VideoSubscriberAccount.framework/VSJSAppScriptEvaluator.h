
@interface VSJSAppScriptEvaluator : NSObject <VSStateMachineDelegate> {
    VSJSApp * _app;
    id /* block */  _completionBlock;
    NSString * _currentURL;
    NSMutableArray * _remainingURLs;
    NSMutableArray * _results;
    VSStateMachine * _stateMachine;
    NSArray * _urls;
}

@property (nonatomic, retain) VSJSApp *app;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSString *currentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *remainingURLs;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, retain) VSStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *urls;

- (void).cxx_destruct;
- (id)app;
- (id /* block */)completionBlock;
- (id)currentURL;
- (id)initWithApp:(id)arg1 urls:(id)arg2;
- (id)remainingURLs;
- (id)results;
- (void)setApp:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCurrentURL:(id)arg1;
- (void)setRemainingURLs:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)start;
- (id)stateMachine;
- (void)transitionToDoneState;
- (void)transitionToEnqueueingNextUrlState;
- (void)transitionToFetchingScriptState;
- (id)urls;

@end
