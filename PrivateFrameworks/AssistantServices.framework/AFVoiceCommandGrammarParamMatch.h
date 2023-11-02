
@interface AFVoiceCommandGrammarParamMatch : NSObject <NSCopying, NSSecureCoding> {
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)text;

@end
