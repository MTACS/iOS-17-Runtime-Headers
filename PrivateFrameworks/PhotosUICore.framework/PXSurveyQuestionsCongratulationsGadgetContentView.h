
@interface PXSurveyQuestionsCongratulationsGadgetContentView : UIView {
    PXCapsuleButton * _actionButton;
    UILabel * _congratulationsLabel;
    <PXSurveyQuestionCongratulationsGadgetContentViewDelegate> * _delegate;
    UIView<_PXCKFullscreenEffectView> * _effectView;
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    UILabel * _messageLabel;
    PXRoundedCornerOverlayView * _roundedOverlayView;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
}

@property (nonatomic, readonly) PXCapsuleButton *actionButton;
@property (nonatomic, readonly) UILabel *congratulationsLabel;
@property (nonatomic) <PXSurveyQuestionCongratulationsGadgetContentViewDelegate> *delegate;
@property (nonatomic, readonly) UIView<_PXCKFullscreenEffectView> *effectView;
@property (nonatomic, readonly) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) PXRoundedCornerOverlayView *roundedOverlayView;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *selectionFeedbackGenerator;

- (void).cxx_destruct;
- (void)_didSelectActionButton;
- (id)actionButton;
- (id)congratulationsLabel;
- (id)delegate;
- (id)effectView;
- (id)impactFeedbackGenerator;
- (id)initWithDetailMessage:(id)arg1 buttonTitle:(id)arg2;
- (void)layoutSubviews;
- (id)messageLabel;
- (id)roundedOverlayView;
- (id)selectionFeedbackGenerator;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startConfettiAnimation;

@end
