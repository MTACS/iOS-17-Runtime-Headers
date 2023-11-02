
@interface TRAuthenticationOperation : TROperation {
    bool  _isCLIMode;
    UIViewController * _presentingViewController;
    NSString * _rawPassword;
    bool  _shouldForceInteractiveAuth;
    bool  _shouldIgnoreAuthFailures;
    bool  _shouldUseAIDA;
    NSSet * _targetedServices;
}

@property (nonatomic) bool isCLIMode;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) NSString *rawPassword;
@property (nonatomic) bool shouldForceInteractiveAuth;
@property (nonatomic) bool shouldIgnoreAuthFailures;
@property (nonatomic) bool shouldUseAIDA;
@property (nonatomic, retain) NSSet *targetedServices;

- (void).cxx_destruct;
- (bool)_canDoMagicAuthForAccount:(id)arg1;
- (void)execute;
- (bool)isCLIMode;
- (id)presentingViewController;
- (id)rawPassword;
- (void)setIsCLIMode:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setShouldForceInteractiveAuth:(bool)arg1;
- (void)setShouldIgnoreAuthFailures:(bool)arg1;
- (void)setShouldUseAIDA:(bool)arg1;
- (void)setTargetedServices:(id)arg1;
- (bool)shouldForceInteractiveAuth;
- (bool)shouldIgnoreAuthFailures;
- (bool)shouldUseAIDA;
- (id)targetedServices;

@end
