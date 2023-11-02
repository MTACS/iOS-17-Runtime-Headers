
@interface CKDefaultSceneOverlayPresentationContext : NSObject <CKSceneOverlayPresentationContext> {
    CKChatInputController * _inputController;
    long long  _presentationStyle;
    UIView * _viewToPortal;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } anchorRect;
@property (nonatomic, readonly) UIView *anchorView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CKChatInputController *inputController;
@property (nonatomic, readonly) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *viewToPortal;

- (void).cxx_destruct;
- (id)_determineViewToPortal;
- (void)_endSendMenuPresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })anchorRect;
- (id)anchorView;
- (void)didChangePopoverMetrics:(id)arg1;
- (void)didDismissSendMenuPresentation;
- (id)initWithChatInputController:(id)arg1 initialTraitCollection:(id)arg2;
- (id)inputController;
- (long long)presentationStyle;
- (void)setInputController:(id)arg1;
- (id)viewToPortal;
- (void)willDismissSendMenuPresentation;
- (void)willPresentAppCard;

@end
