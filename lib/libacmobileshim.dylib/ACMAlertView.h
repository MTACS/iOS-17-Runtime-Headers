
@interface ACMAlertView : UIAlertView <UIAlertViewDelegate> {
    id  _acmAlertViewDelegate;
    id /* block */  _completionBlock;
}

@property <acmAlertViewDelegateProtocol> *acmAlertViewDelegate;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)acmAlertViewDelegate;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id /* block */)completionBlock;
- (void)dealloc;
- (void)dismissAlert;
- (void)setAcmAlertViewDelegate:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)showWithCompletionBlock:(id /* block */)arg1;

@end
