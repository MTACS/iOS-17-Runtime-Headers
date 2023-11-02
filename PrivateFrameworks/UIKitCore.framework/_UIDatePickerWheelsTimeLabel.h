
@interface _UIDatePickerWheelsTimeLabel : _UIDatePickerCalendarTimeLabel <_UIControlEventsGestureRecognizerDelegate> {
    UIView * _contentView;
    _UIControlEventsGestureRecognizer * _controlEventsGestureRecognizer;
    bool  _highlightedForTouch;
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
    }  _hoursReferenceFrame;
    UILabel * _measurementLabel;
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
    }  _minutesReferenceFrame;
    UILabel * _timeSeparatorLabel;
    UIView * _touchHighlightedView;
    bool  _wheelsActive;
    <_UIDatePickerWheelsTimeLabelDelegate> * _wheelsDelegate;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } combinedTextRectFromLabels;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) _UIControlEventsGestureRecognizer *controlEventsGestureRecognizer;
@property (nonatomic, readonly) UILabel *hourLabel;
@property (nonatomic, readonly) UILabel *minuteLabel;
@property (nonatomic, readonly) UILabel *timeSeparatorLabel;
@property (nonatomic) bool wheelsActive;
@property (nonatomic) <_UIDatePickerWheelsTimeLabelDelegate> *wheelsDelegate;

+ (bool)supportsScribbleInteraction;

- (void).cxx_destruct;
- (bool)_treatMinutesAsHoursForState:(unsigned long long)arg1;
- (id)_viewForHighlightedTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginEditingWheels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })combinedTextRectFromLabels;
- (void)configureLabelsForHour:(struct { double x1; double x2; long long x3; })arg1 minute:(struct { double x1; double x2; long long x3; })arg2;
- (id)contentView;
- (id)controlEventsGestureRecognizer;
- (void)controlEventsGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3;
- (long long)decrementBehaviour;
- (bool)displaysTimeOfDayLabel;
- (void)endEditingWheels;
- (id)font;
- (id)hourLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hourRect;
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;
- (id)minuteLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minuteRect;
- (void)pushCurrentStateIntoUI;
- (void)setContentHidden:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlightedForTouch:(bool)arg1;
- (void)setWheelsActive:(bool)arg1;
- (void)setWheelsDelegate:(id)arg1;
- (void)stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)timeSeparatorLabel;
- (void)updateHoursFromDatePicker:(long long)arg1 wheelsChanged:(bool)arg2;
- (void)updateMinutesFromDatePicker:(long long)arg1 wheelsChanged:(bool)arg2;
- (bool)wheelsActive;
- (id)wheelsDelegate;
- (void)willBeginWritingInScribbleInteraction;

@end
