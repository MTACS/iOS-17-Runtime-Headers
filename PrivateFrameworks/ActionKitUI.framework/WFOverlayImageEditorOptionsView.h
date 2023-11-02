
@interface WFOverlayImageEditorOptionsView : UIView {
    UIButton * _cancelButton;
    <WFOverlayImageEditorOptionsViewDelegate> * _delegate;
    UIButton * _nextButton;
    UILabel * _nextLabel;
    WFOverlayImageEditorOptionButton * _opacityButton;
    WFOverlayImageEditorOptionButton * _resetButton;
    WFOverlayImageEditorOptionButton * _rotationButton;
    UIView * _topBorder;
}

@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic) <WFOverlayImageEditorOptionsViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *nextButton;
@property (nonatomic, readonly) UILabel *nextLabel;
@property (nonatomic, readonly) WFOverlayImageEditorOptionButton *opacityButton;
@property (nonatomic, readonly) WFOverlayImageEditorOptionButton *resetButton;
@property (nonatomic, readonly) WFOverlayImageEditorOptionButton *rotationButton;
@property (nonatomic, readonly) UIView *topBorder;

- (void).cxx_destruct;
- (id)cancelButton;
- (id)delegate;
- (void)didTapCancelButton;
- (void)didTapNextButton;
- (void)didTapOpacityButton;
- (void)didTapResetButton;
- (void)didTapRotationButton;
- (id)init;
- (id)nextButton;
- (id)nextLabel;
- (id)opacityButton;
- (id)resetButton;
- (id)rotationButton;
- (void)setDelegate:(id)arg1;
- (id)topBorder;

@end
