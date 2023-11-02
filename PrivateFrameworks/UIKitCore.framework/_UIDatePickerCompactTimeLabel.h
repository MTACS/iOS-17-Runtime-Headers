
@interface _UIDatePickerCompactTimeLabel : _UIDatePickerCalendarTimeLabel <UIGestureRecognizerDelegateInternal, UIPointerInteractionDelegate, _UIControlEventsGestureRecognizerDelegate, _UIDatePickerCalendarTimeLabelDelegate, _UIPassthroughScrollInteractionDelegate> {
    unsigned long long  _currentState;
    struct { 
        unsigned int needsLabelUpdateOnResignFirstResponder : 1; 
        unsigned int deferringHoverStateUpdate : 1; 
        unsigned int highlightedForTouch : 1; 
    }  _flags;
    NSDateFormatter * _formatter;
    long long  _highlightedScope;
    UILabel * _hourLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hourRect;
    UIView * _inputBackgroundView;
    UILabel * _label;
    UILabel * _minuteLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _minuteRect;
    _UIDatePickerOverlayPresentation * _overlayPresentation;
    NSDictionary * _overrideAttributes;
    _UIPassthroughScrollInteraction * _passthroughInteraction;
    UIPointerInteraction * _pointerInteraction;
    _UIDatePickerCalendarTime * _selectedTime;
    <_UIDatePickerCompactTimeLabelDelegate> * _selectionDelegate;
    bool  _tapInteractionControlledExternally;
    NSTextContentStorage * _textContentStorage;
    _UITextLayoutControllerBase<_UITextLayoutController> * _textLayoutController;
    UILabel * _timeOfDayLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _timeOfDayRect;
    UIView * _touchHighlightedView;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, readonly) unsigned long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *hourLabel;
@property (nonatomic, readonly) UIView *inputBackgroundView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic, readonly) UILabel *minuteLabel;
@property (nonatomic, retain) _UIDatePickerOverlayPresentation *overlayPresentation;
@property (nonatomic, retain) NSDictionary *overrideAttributes;
@property (nonatomic, readonly) _UIPassthroughScrollInteraction *passthroughInteraction;
@property (getter=isPassthroughInteractionEnabled, nonatomic) bool passthroughInteractionEnabled;
@property (nonatomic, readonly) UIPointerInteraction *pointerInteraction;
@property (nonatomic, readonly) _UIDatePickerCalendarTime *selectedTime;
@property (nonatomic) <_UIDatePickerCompactTimeLabelDelegate> *selectionDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool tapInteractionControlledExternally;
@property (nonatomic, readonly) UILabel *timeOfDayLabel;

- (void).cxx_destruct;
- (id)_currentDateForInput;
- (void)_expandedComponentRectForHours:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 minuteRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 timeOfDayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_gestureRecognizerFailed:(id)arg1;
- (long long)_inputScopeForPointerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_reloadWithDate:(id)arg1 notify:(bool)arg2;
- (void)_updateEnabledStyling;
- (void)_updateHoverStateLabelsIfNeeded;
- (void)_updateInputFieldFromSelectedDateComponents;
- (void)_updateInputFieldLayoutForCurrentState;
- (void)_updateLayoutRectsForRanges:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; })arg1;
- (void)_updateSelectedDateComponentsFromInput;
- (void)_updateTextContentStorage;
- (void)_updateTimeFormatIfNeeded;
- (void)activateLabel;
- (bool)adjustsFontSizeToFitWidth;
- (void)applyTextAttributesForState:(unsigned long long)arg1 inputScope:(long long)arg2 updater:(id /* block */)arg3;
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;
- (unsigned long long)currentState;
- (void)didTapInputLabel:(id)arg1;
- (id)font;
- (id)hourLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hourRect;
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;
- (id)inputBackgroundView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPassthroughInteractionEnabled;
- (long long)keyboardTypeForTimeLabel:(id)arg1;
- (id)label;
- (double)minimumScaleFactor;
- (id)minuteLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minuteRect;
- (id)overlayPresentation;
- (id)overrideAttributes;
- (id)passthroughInteraction;
- (bool)passthroughScrollInteraction:(id)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (bool)passthroughScrollInteractionDidRecognize:(id)arg1;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (void)pushCurrentStateIntoUI;
- (void)pushCurrentStateIntoUIAndNotify;
- (void)reloadWithCalendar:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(bool)arg3 displaysTimeZone:(bool)arg4;
- (void)reloadWithDate:(id)arg1;
- (id)selectedTime;
- (id)selectionDelegate;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlightedForTouch:(bool)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setOverlayPresentation:(id)arg1;
- (void)setOverrideAttributes:(id)arg1;
- (void)setPassthroughInteractionEnabled:(bool)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setTapInteractionControlledExternally:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (bool)tapInteractionControlledExternally;
- (bool)timeLabel:(id)arg1 didReceiveText:(id)arg2;
- (void)timeLabel:(id)arg1 didUpdateText:(id)arg2;
- (bool)timeLabelCanBecomeFirstResponder:(id)arg1;
- (void)timeLabelDidBecomeFirstResponder:(id)arg1;
- (void)timeLabelDidBeginEditing:(id)arg1;
- (void)timeLabelDidEndEditing:(id)arg1;
- (void)timeLabelDidFailToBecomeFirstResponder:(id)arg1;
- (void)timeLabelDidResignFirstResponder:(id)arg1;
- (bool)timeLabelShouldSuppressSoftwareKeyboard:(id)arg1;
- (void)timeLabelWillBecomeFirstResponder:(id)arg1;
- (id)timeOfDayLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeOfDayRect;
- (id)updateHoverLabelForAttributedString:(id)arg1 ranges:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; })arg2;
- (void)willBeginWritingInScribbleInteraction;

@end
