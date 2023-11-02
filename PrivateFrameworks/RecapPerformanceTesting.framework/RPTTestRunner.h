
@interface RPTTestRunner : NSObject {
    <RPTTestRunnerDelegate> * _delegate;
    RCPInlinePlayer * _inlinePlayer;
    RPTInteractionOptions * _interactionOptions;
    RPTSettings * _settings;
}

@property (nonatomic) <RPTTestRunnerDelegate> *delegate;
@property (nonatomic, readonly, retain) RCPInlinePlayer *inlinePlayer;
@property (nonatomic, retain) RPTInteractionOptions *interactionOptions;
@property (nonatomic, retain) RPTSettings *settings;

+ (bool)isRecapAvailable;
+ (void)playInteraction:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)runTestWithParameters:(id)arg1;
+ (void)runTestWithParameters:(id)arg1 delegate:(id)arg2;
+ (void)runTestWithParameters:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_failWithParameters:(id)arg1 error:(id)arg2;
- (void)_finishWithParameters:(id)arg1;
- (bool)_isReadyForRunningParameters:(id)arg1 error:(id*)arg2;
- (bool)_managePPTLifetimeEvent:(long long)arg1 forParameters:(id)arg2;
- (void)_releaseDelegateIfNeeded;
- (void)_retainDelegateIfNeeded;
- (void)_runTestWithParameters:(id)arg1;
- (void)_runTestWithParameters:(id)arg1 retries:(long long)arg2;
- (bool)checkTestRequirementsWithError:(out id*)arg1;
- (id)delegate;
- (id)initWithInteractionOptions:(id)arg1;
- (id)inlinePlayer;
- (id)interactionOptions;
- (void)playInteraction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runTestWithParameters:(id)arg1;
- (void)runTestWithParameters:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setInteractionOptions:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
