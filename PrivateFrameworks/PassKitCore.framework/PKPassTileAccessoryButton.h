
@interface PKPassTileAccessoryButton : PKPassTileAccessory {
    bool  _spinnerEnabled;
    NSString * _title;
}

@property (getter=isSpinnerEnabled, nonatomic) bool spinnerEnabled;
@property (nonatomic, copy) NSString *title;

+ (id)createWithTitle:(id)arg1 spinnerEnabled:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqual:(id)arg1;
- (bool)_setupWithDictionary:(id)arg1;
- (id)createResolvedAccessoryWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isSpinnerEnabled;
- (void)setSpinnerEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
