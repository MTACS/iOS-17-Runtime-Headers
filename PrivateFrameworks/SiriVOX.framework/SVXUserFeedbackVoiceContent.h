
@interface SVXUserFeedbackVoiceContent : NSObject <NSCopying, NSSecureCoding> {
    bool  _isPhonetic;
    NSString * _text;
}

@property (nonatomic, readonly) bool isPhonetic;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 isPhonetic:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPhonetic;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)text;

@end
