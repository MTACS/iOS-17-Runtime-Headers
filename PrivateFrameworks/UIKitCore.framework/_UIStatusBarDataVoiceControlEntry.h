
@interface _UIStatusBarDataVoiceControlEntry : _UIStatusBarDataEntry {
    long long  _type;
}

@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
