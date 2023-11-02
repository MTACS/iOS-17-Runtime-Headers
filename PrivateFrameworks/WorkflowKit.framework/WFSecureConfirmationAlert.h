
@interface WFSecureConfirmationAlert : WFAlert {
    WFDialogAttribution * _attribution;
    WFAlertButton * _cancelButton;
    id /* block */  _cancellationHandler;
    WFAlertButton * _continueButton;
    id /* block */  _failureHandler;
    id /* block */  _successHandler;
}

@property (nonatomic, retain) WFDialogAttribution *attribution;
@property (nonatomic, readonly) WFAlertButton *cancelButton;
@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly) WFAlertButton *continueButton;
@property (nonatomic, copy) id /* block */ failureHandler;
@property (nonatomic, copy) id /* block */ successHandler;

- (void).cxx_destruct;
- (id)attribution;
- (id)buttons;
- (id)cancelButton;
- (id /* block */)cancellationHandler;
- (id)configuredCancelButton;
- (id)configuredContinueButton;
- (id)continueButton;
- (id /* block */)failureHandler;
- (id)init;
- (void)setAttribution:(id)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setFailureHandler:(id /* block */)arg1;
- (void)setSuccessHandler:(id /* block */)arg1;
- (id /* block */)successHandler;

@end
