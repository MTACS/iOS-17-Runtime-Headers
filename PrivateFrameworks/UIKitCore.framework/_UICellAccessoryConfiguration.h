
@interface _UICellAccessoryConfiguration : NSObject <NSCopying, NSSecureCoding> {
    UIColor * _backgroundColor;
    UIColor * _tintColor;
    bool  _usesDefaultLayoutWidth;
}

@property (getter=_backgroundColor, setter=_setBackgroundColor:, nonatomic, retain) UIColor *backgroundColor;
@property (getter=_identifier, nonatomic, readonly) NSString *identifier;
@property (getter=_isSystemType, nonatomic, readonly) bool isSystemType;
@property (getter=_systemType, nonatomic, readonly) long long systemType;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) bool usesDefaultLayoutWidth;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (id)_identifier;
- (bool)_isSystemType;
- (void)_setBackgroundColor:(id)arg1;
- (long long)_systemType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUsesDefaultLayoutWidth:(bool)arg1;
- (id)tintColor;
- (bool)usesDefaultLayoutWidth;

@end
