
@interface AKTextFieldAnnotation : AKTextBoxAnnotation {
    NSString * _fieldName;
}

@property (copy) NSString *fieldName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldName;
- (id)initWithCoder:(id)arg1;
- (void)setFieldName:(id)arg1;

@end
