
@interface AFDictationNLUResult : NSObject <NSCopying, NSSecureCoding> {
    AFVoiceCommandGrammarParsePackage * _commandGrammarParsePackage;
    SIRINLUEXTERNALCDMNluResponse * _nluResponse;
}

@property (nonatomic, retain) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;
@property (nonatomic, retain) SIRINLUEXTERNALCDMNluResponse *nluResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commandGrammarParsePackage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)nluResponse;
- (void)setCommandGrammarParsePackage:(id)arg1;
- (void)setNluResponse:(id)arg1;

@end
