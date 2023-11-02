
@interface PKPickerContactFieldConfiguration : PKContactFieldConfiguration <NSSecureCoding> {
    NSArray * _pickerItems;
}

@property (nonatomic, readonly) NSArray *pickerItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)pickerItems;

@end
