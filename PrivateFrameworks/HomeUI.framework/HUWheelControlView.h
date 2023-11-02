
@interface HUWheelControlView : UIView <HUControlView, UIPickerViewDataSource, UIPickerViewDelegate> {
    bool  _canBeHighlighted;
    NSSet * _customValues;
    <HUControlViewDelegate> * _delegate;
    NSString * _identifier;
    UIPickerView * _pickerView;
    NSFormatter * _valueFormatter;
    NSArray * _values;
    <HUWheelControlViewDelegate> * _wheelDelegate;
    NSArray * _wheelValues;
}

@property (nonatomic) bool canBeHighlighted;
@property (nonatomic, retain) NSSet *customValues;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUControlViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSFormatter *valueFormatter;
@property (nonatomic, retain) NSArray *values;
@property (nonatomic) <HUWheelControlViewDelegate> *wheelDelegate;
@property (nonatomic, retain) NSArray *wheelValues;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_formatValue:(id)arg1;
- (void)_generateWheelValues;
- (void)_setupConstraints;
- (void)_updateUIToReachable;
- (bool)canBeHighlighted;
- (id)customValues;
- (id)delegate;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setCanBeHighlighted:(bool)arg1;
- (void)setCustomValues:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id)arg1;
- (void)setValues:(id)arg1;
- (void)setWheelDelegate:(id)arg1;
- (void)setWheelValues:(id)arg1;
- (id)value;
- (id)valueFormatter;
- (id)values;
- (id)wheelDelegate;
- (id)wheelValues;

@end
