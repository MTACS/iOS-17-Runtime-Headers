
@interface HUTimerIntervalPickerView : UIControl <UIPickerViewDataSource, UIPickerViewDelegate> {
    <HUTimerIntervalPickerViewDelegate> * _delegate;
    UILabel * _hoursLabel;
    UILabel * _minutesLabel;
    UILabel * _secondsLabel;
    UIPickerView * _timePicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTimerIntervalPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *hoursLabel;
@property (nonatomic, retain) UILabel *minutesLabel;
@property (nonatomic, retain) UILabel *secondsLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIPickerView *timePicker;

- (void).cxx_destruct;
- (void)_fadeLabelForComponent:(long long)arg1 toText:(id)arg2 animated:(bool)arg3;
- (id)_hoursStringForHour:(long long)arg1;
- (id)_labelForComponent:(long long)arg1 createIfNecessary:(bool)arg2;
- (id)_makeNewComponentLabel;
- (id)_minutesStringForMinutes:(long long)arg1;
- (void)_positionLabel:(id)arg1 forComponent:(long long)arg2;
- (id)_secondsStringForSeconds:(long long)arg1;
- (void)_setLabel:(id)arg1 forComponent:(long long)arg2;
- (void)_updateLabels:(bool)arg1;
- (id)delegate;
- (id)hoursLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)minutesLabel;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)secondsLabel;
- (double)selectedDuration;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHoursLabel:(id)arg1;
- (void)setMinutesLabel:(id)arg1;
- (void)setSecondsLabel:(id)arg1;
- (void)setTimePicker:(id)arg1;
- (id)timePicker;
- (void)updateConstraints;

@end
