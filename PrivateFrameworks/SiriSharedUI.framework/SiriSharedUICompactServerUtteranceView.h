
@interface SiriSharedUICompactServerUtteranceView : SiriSharedUIStandardView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <SiriSharedUICompactServerUtteranceViewDelegate> * _delegate;
    SiriSharedUIDeviceMotionEffectView * _deviceMotionEffectView;
    NSMapTable * _emojiLabels;
    bool  _isInAmbient;
    bool  _isInAmbientInteractivity;
    bool  _isMultiLine;
    UIView * _labelsContainerView;
    NSMutableArray * _serverLabels;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) <SiriSharedUICompactServerUtteranceViewDelegate> *delegate;
@property (nonatomic, readonly) SiriSharedUIDeviceMotionEffectView *deviceMotionEffectView;
@property (nonatomic) bool isInAmbient;
@property (nonatomic) bool isInAmbientInteractivity;
@property (nonatomic, readonly) UIView *labelsContainerView;

- (void).cxx_destruct;
- (id)_createEmojiLabelForString:(id)arg1 containingEmojisAtRanges:(id)arg2;
- (id)_createLabel;
- (id)_createLabelForUtterance:(id)arg1;
- (id)_fontForUtteranceLabel;
- (double)_lineHeightForFont:(id)arg1;
- (double)_scaledSpacingBetweenLabels;
- (void)_setTextForLabel:(id)arg1 text:(id)arg2;
- (id)_textForLabel:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (id)delegate;
- (id)deviceMotionEffectView;
- (id)initWithContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 delegate:(id)arg2;
- (bool)isInAmbient;
- (bool)isInAmbientInteractivity;
- (bool)isMultiLine;
- (id)labelsContainerView;
- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInAmbient:(bool)arg1;
- (void)setIsInAmbientInteractivity:(bool)arg1;
- (void)setUtterances:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
