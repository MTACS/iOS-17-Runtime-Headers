
@interface PKPassDateField : PKPassField {
    long long  _dateStyle;
    bool  _ignoresTimeZone;
    bool  _isRelative;
    long long  _timeStyle;
}

@property (nonatomic) long long dateStyle;
@property (nonatomic) bool ignoresTimeZone;
@property (nonatomic) bool isRelative;
@property (nonatomic) long long timeStyle;

+ (bool)supportsSecureCoding;

- (id)asDictionary;
- (id)asMutableDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dateStyle;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoresTimeZone;
- (id)initWithCoder:(id)arg1;
- (bool)isRelative;
- (void)setDateStyle:(long long)arg1;
- (void)setIgnoresTimeZone:(bool)arg1;
- (void)setIsRelative:(bool)arg1;
- (void)setTimeStyle:(long long)arg1;
- (long long)timeStyle;
- (id)value;

@end
