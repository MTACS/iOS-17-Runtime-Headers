
@interface AFSpeechInfoPackage : NSObject <NSCopying, NSSecureCoding> {
    AFVoiceCommandGrammarParsePackage * _commandGrammarParsePackage;
}

@property (nonatomic, readonly, copy) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commandGrammarParsePackage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandGrammarParsePackage:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
