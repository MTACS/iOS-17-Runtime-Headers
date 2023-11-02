
@interface PKAddressPickerField : UIPickerView {
    PKAddressTextField * _addressTextField;
    PKPickerContactFieldConfiguration * _pickerFieldConfiguration;
}

@property (nonatomic, readonly) PKAddressTextField *addressTextField;
@property (nonatomic, readonly) PKPickerContactFieldConfiguration *pickerFieldConfiguration;

- (void).cxx_destruct;
- (id)addressTextField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 addressTextField:(id)arg2;
- (id)pickerFieldConfiguration;

@end
