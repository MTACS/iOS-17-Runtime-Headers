
@interface AFOutputVoiceColorDescriptor : NSObject <NSCopying, NSSecureCoding> {
    float  _alpha;
    NSString * _colorName;
    NSString * _hexColor;
    NSString * _localizedOutputVoice;
    NSString * _localizedOutputVoiceColor;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly, copy) NSString *colorName;
@property (nonatomic, readonly, copy) NSString *hexColor;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoice;
@property (nonatomic, readonly, copy) NSString *localizedOutputVoiceColor;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (float)alpha;
- (id)colorName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hexColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithHexColor:(id)arg1 colorName:(id)arg2 alpha:(float)arg3 localizedOutputVoiceColor:(id)arg4 localizedOutputVoice:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)localizedOutputVoice;
- (id)localizedOutputVoiceColor;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
