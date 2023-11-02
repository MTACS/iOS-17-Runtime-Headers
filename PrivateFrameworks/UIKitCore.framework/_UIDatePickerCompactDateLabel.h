
@interface _UIDatePickerCompactDateLabel : UIView <UIPointerInteractionDelegate, _UIControlEventsGestureRecognizerDelegate> {
    UIView * _backgroundView;
    <_UIDatePickerCompactDateLabelDelegate> * _delegate;
    bool  _highlightedForTouch;
    _UIDatePickerOverlayPresentation * _overlayPresentation;
    bool  _tapInteractionControlledExternally;
    _UIDatePickerLinkedLabel * _textLabel;
    _UIDatePickerStyle * _visualStyle;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, retain) UIView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDatePickerCompactDateLabelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightedForTouch;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) _UIDatePickerOverlayPresentation *overlayPresentation;
@property (nonatomic, retain) NSDictionary *overrideAttributes;
@property (readonly) Class superclass;
@property (nonatomic) bool tapInteractionControlledExternally;
@property (nonatomic) long long textAlignment;
@property (nonatomic) bool textColorFollowsTintColor;
@property (nonatomic, retain) _UIDatePickerLinkedLabel *textLabel;
@property (nonatomic, retain) NSArray *titles;
@property (nonatomic, retain) _UIDatePickerStyle *visualStyle;

- (void).cxx_destruct;
- (void)_didTapTextLabel;
- (void)activateLabel;
- (bool)adjustsFontSizeToFitWidth;
- (id)backgroundView;
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;
- (id)delegate;
- (bool)highlightedForTouch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)minimumScaleFactor;
- (id)overlayPresentation;
- (id)overrideAttributes;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlightedForTouch:(bool)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setOverlayPresentation:(id)arg1;
- (void)setOverrideAttributes:(id)arg1;
- (void)setTapInteractionControlledExternally:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (bool)tapInteractionControlledExternally;
- (long long)textAlignment;
- (bool)textColorFollowsTintColor;
- (id)textLabel;
- (id)titles;
- (id)visualStyle;

@end
