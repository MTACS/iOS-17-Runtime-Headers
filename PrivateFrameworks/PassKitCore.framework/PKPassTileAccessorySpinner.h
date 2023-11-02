
@interface PKPassTileAccessorySpinner : PKPassTileAccessory {
    bool  _spinnerEnabled;
}

@property (getter=isSpinnerEnabled, nonatomic) bool spinnerEnabled;

+ (bool)supportsSecureCoding;

- (bool)_isEqual:(id)arg1;
- (bool)_setupWithDictionary:(id)arg1;
- (id)createResolvedAccessoryWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isSpinnerEnabled;
- (void)setSpinnerEnabled:(bool)arg1;

@end
