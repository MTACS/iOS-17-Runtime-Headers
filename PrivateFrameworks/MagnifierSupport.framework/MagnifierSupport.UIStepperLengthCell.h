
@interface MagnifierSupport.UIStepperLengthCell : UITableViewCell {
    void _distanceStepper;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lengthMeasure;
    void _valueChangedHandler;
}

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)distanceStepperValueChanged:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
