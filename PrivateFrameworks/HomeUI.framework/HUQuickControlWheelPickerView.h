
@interface HUQuickControlWheelPickerView : UIView <HUQuickControlInteractiveView, UIPickerViewDataSource, UIPickerViewDelegate> {
    UIView * _bottomGradientView;
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    <HUQuickControlViewInteractionDelegate> * _interactionDelegate;
    NSArray * _items;
    double  _maxTextWidth;
    UIPickerView * _pickerView;
    HUQuickControlWheelPickerViewProfile * _profile;
    unsigned long long  _reachabilityState;
    NSNumber * _selectedRow;
    UIView * _selectedRowSurroundingView;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
    UIView * _topGradientView;
    bool  _userInteractionActive;
}

@property (nonatomic, retain) UIView *bottomGradientView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic) <HUQuickControlViewInteractionDelegate> *interactionDelegate;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) double maxTextWidth;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (nonatomic, copy) HUQuickControlWheelPickerViewProfile *profile;
@property (nonatomic) unsigned long long reachabilityState;
@property (nonatomic, retain) id secondaryValue;
@property (nonatomic, retain) NSNumber *selectedRow;
@property (nonatomic, retain) UIView *selectedRowSurroundingView;
@property (nonatomic, retain) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topGradientView;
@property (getter=isUserInteractionActive, nonatomic) bool userInteractionActive;
@property (nonatomic, retain) id value;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_actuateSelectionTapticFeedback;
- (void)_prepareForTapticFeedback;
- (void)_updateSelectedRowBorderView:(id)arg1;
- (void)_updateUI;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)bottomGradientView;
- (id)impactFeedbackGenerator;
- (id)initWithProfile:(id)arg1;
- (id)interactionDelegate;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (bool)isUserInteractionActive;
- (id)items;
- (void)layoutSubviews;
- (double)maxTextWidth;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)profile;
- (unsigned long long)reachabilityState;
- (id)selectedRow;
- (id)selectedRowSurroundingView;
- (id)selectionFeedbackGenerator;
- (void)setBottomGradientView:(id)arg1;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMaxTextWidth:(double)arg1;
- (void)setPickerView:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setSelectedRow:(id)arg1;
- (void)setSelectedRowSurroundingView:(id)arg1;
- (void)setSelectionFeedbackGenerator:(id)arg1;
- (void)setTopGradientView:(id)arg1;
- (void)setUserInteractionActive:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)tintColorDidChange;
- (id)topGradientView;
- (id)value;

@end
