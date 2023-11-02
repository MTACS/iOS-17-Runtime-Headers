
@protocol ACC2SVControllerProtocol <NSObject>

@required

- (void)cancelWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<ACC2SVControllerDelegate> *)delegate;
- (void)perform2StepVerificationWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, <ACCSSOTokenProtocol> *, void*
- (<ACC2SVAuthenticationUIControllerProtocol> *)secondFactorAuthUIController;
- (void)setDelegate:(id <ACC2SVControllerDelegate>)arg1;
- (void)setSecondFactorAuthUIController:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)setTransportController:(id <ACC2SVTransportControllerProtocol>)arg1;
- (<ACC2SVTransportControllerProtocol> *)transportController;

@optional

- (void)removeHSATokenForPrincipal:(ACFPrincipal *)arg1;
- (void)setup2StepVerificationWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ACFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)synchronizeHSATokens:(NSArray *)arg1;

@end
