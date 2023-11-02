
@interface _UIModifierKeyCursorAccessory : _UICursorAccessory {
    long long  _modifierType;
}

@property (nonatomic) long long modifierType;

- (id)_modifierKeyCursorAccessory;
- (id)descriptionBuilder;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (long long)modifierType;
- (void)setModifierType:(long long)arg1;

@end
