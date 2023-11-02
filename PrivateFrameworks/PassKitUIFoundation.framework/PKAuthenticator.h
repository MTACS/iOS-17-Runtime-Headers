
@interface PKAuthenticator : NSObject {
    unsigned long long  _authenticationIdentifier;
    NSDictionary * _clientAnalyticsParameters;
    PKAuthenticatorEvaluationContext * _context;
    <PKAuthenticatorDelegate> * _delegate;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) unsigned long long authenticationIdentifier;
@property (nonatomic, copy) NSDictionary *clientAnalyticsParameters;
@property (nonatomic, readonly) long long coachingState;
@property (nonatomic) <PKAuthenticatorDelegate> *delegate;
@property (nonatomic, readonly) long long evaluationState;
@property (nonatomic, readonly) bool fingerPresent;
@property (nonatomic, readonly) bool passcodeActive;
@property (nonatomic, readonly) bool passcodeWasPresented;
@property (nonatomic, readonly) bool passphraseActive;

+ (unsigned long long)_currentStateForMechanisms:(id)arg1;
+ (bool)_isAccessibilityUserIntentEnabled;
+ (unsigned long long)cachedStateForPolicy:(long long)arg1;
+ (bool)canPerformPSD2StyleBuyForAccessControlRef:(struct __SecAccessControl { }*)arg1;
+ (unsigned long long)currentStateForAccessControl:(struct __SecAccessControl { }*)arg1;
+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (bool)isUserIntentAvailableWithStyle:(long long)arg1;
+ (void)preheatAuthenticator;
+ (void)removeUserIntentAvailable;
+ (void)resetSharedRootContextWithCompletion:(id /* block */)arg1;
+ (long long)userIntentStyle;
+ (id)viewServiceBundleID;

- (void).cxx_destruct;
- (id)_context;
- (bool)_delegateSupportsPasscodePresentation;
- (bool)_delegateSupportsPassphrasePresentation;
- (void)_evaluateEvaluationContext:(id)arg1;
- (void)_handleInstructionsForRequest:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id)_optionsForEvaluationRequest:(id)arg1 withEvaluationContext:(id)arg2;
- (id)_swapContext:(id)arg1;
- (id)_swapContext:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)accessExternalizedContextWithCompletion:(id /* block */)arg1;
- (unsigned long long)authenticationIdentifier;
- (void)cancelEvaluation;
- (void)cancelEvaluationWithOptions:(unsigned long long)arg1;
- (id)clientAnalyticsParameters;
- (long long)coachingState;
- (void)dealloc;
- (id)delegate;
- (void)evaluateRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)evaluationState;
- (void)fallbackToSystemPasscodeUI;
- (bool)fingerPresent;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (bool)passcodeActive;
- (bool)passcodeWasPresented;
- (bool)passphraseActive;
- (void)restartEvaluation;
- (void)setClientAnalyticsParameters:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
