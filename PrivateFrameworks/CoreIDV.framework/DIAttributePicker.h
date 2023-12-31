
@interface DIAttributePicker : DIAttribute <NSSecureCoding> {
    NSArray * _pickerItems;
    DIAttributePickerItem * currentValue;
    DIAttributePickerItem * defaultValue;
}

@property (getter=getCurrentValue, nonatomic, copy) DIAttributePickerItem *currentValue;
@property (nonatomic, copy) DIAttributePickerItem *defaultValue;
@property (nonatomic, copy) NSArray *pickerItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCurrentValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)pickerItems;
- (void)setCurrentValue:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setPickerItems:(id)arg1;

@end
