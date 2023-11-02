
@interface PXConfidentialityWarningViewController : UIViewController {
    UIButton * _cancelButton;
    id /* block */  _cancellationHandler;
    UIButton * _confirmButton;
    UIVisualEffectView * _effectView;
    UILabel * _messageLabel;
}

@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly) UIButton *confirmButton;
@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (nonatomic, readonly) UILabel *messageLabel;

- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (id)cancelButton;
- (id /* block */)cancellationHandler;
- (id)confirmButton;
- (id)effectView;
- (id)messageLabel;
- (void)presentAsOverlayInWindowScene:(id)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
