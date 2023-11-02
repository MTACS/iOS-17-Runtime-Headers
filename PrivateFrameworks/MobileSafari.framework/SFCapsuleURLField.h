
@interface SFCapsuleURLField : UIView <SFCapsuleContentView> {
    _SFDimmingButton * _clearTextButton;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _keyContentTransform;
    double  _lastPlaceholderWidth;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _microphoneContentTransform;
    double  _nonKeyContentAlpha;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfKeyText;
    UITextField * _textField;
    NSLayoutConstraint * _textFieldTrailingConstraint;
    _SFDimmingButton * _voiceSearchButton;
    NSArray * _voiceSearchButtonConstraints;
    id /* block */  _voiceSearchTappedAction;
    NSLayoutConstraint * _voiceSearchToCapsuleConstraint;
    NSLayoutConstraint * _voiceSearchToClearButtonConstraint;
}

@property (nonatomic, copy) id /* block */ buttonPointerStyleProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ highlightObserver;
@property (setter=setHighlighted:, nonatomic) bool isHighlighted;
@property (setter=setMinimized:, nonatomic) bool isMinimized;
@property (setter=setSelected:, nonatomic) bool isSelected;
@property (nonatomic, readonly) double keyContentBaselineBottomInset;
@property (nonatomic, readonly) double keyContentCapHeightTopInset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyContentRect;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } keyContentTransform;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) NSNumber *microphoneContentOriginX;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } microphoneContentTransform;
@property (nonatomic) double minimizationPercent;
@property (nonatomic) double nonKeyContentAlpha;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfKeyText;
@property (nonatomic) bool showsVoiceSearchButton;
@property (nonatomic) <SFCapsuleContentViewSizeUpdating> *sizeUpdater;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic, retain) _SFBarTheme *theme;
@property (nonatomic) UIView *unclippedContainer;
@property (nonatomic, copy) id /* block */ voiceSearchTappedAction;

- (void).cxx_destruct;
- (void)_clearTextButtonTapped:(id)arg1;
- (id)_newDimmingButtonWithSystemImageNamed:(id)arg1 action:(SEL)arg2 accessibilityIdentifier:(id)arg3;
- (void)_tap:(id)arg1;
- (void)_updateClearButtonVisibility;
- (void)_updatePlaceholderText;
- (void)_voiceSearchAvailabilityDidChange:(id)arg1;
- (void)_voiceSearchButtonTapped:(id)arg1;
- (id /* block */)buttonPointerStyleProvider;
- (void)dealloc;
- (id)initWithTextField:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyContentRect;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })keyContentTransform;
- (void)layoutSubviews;
- (id)microphoneContentOriginX;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })microphoneContentTransform;
- (double)nonKeyContentAlpha;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfKeyText;
- (void)setButtonPointerStyleProvider:(id /* block */)arg1;
- (void)setKeyContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setMicrophoneContentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setNonKeyContentAlpha:(double)arg1;
- (void)setRangeOfKeyText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShowsVoiceSearchButton:(bool)arg1;
- (void)setVoiceSearchTappedAction:(id /* block */)arg1;
- (bool)showsVoiceSearchButton;
- (id)textField;
- (void)textFieldDidChange:(id)arg1;
- (void)updateConstraints;
- (id /* block */)voiceSearchTappedAction;

@end
