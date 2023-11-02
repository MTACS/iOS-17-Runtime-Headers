
@interface _UICellAccessoryConfigurationMultiselect : _UICellAccessoryConfiguration {
    UIColor * _selectedTintColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *selectedTintColor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (long long)_systemType;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)selectedTintColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelectedTintColor:(id)arg1;

@end
