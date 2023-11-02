
@interface CMDPGrammarData : NSObject {
    NSString * _builtInLMIdentifier;
    NSString * _commandIdentifier;
    NSString * _word;
}

@property (readonly) NSString *builtInLMIdentifier;
@property (readonly) NSString *commandIdentifier;
@property (readonly) NSString *word;

- (void).cxx_destruct;
- (id)builtInLMIdentifier;
- (id)commandIdentifier;
- (id)initWithGrammarDataWord:(id)arg1 lmIdentifer:(id)arg2 commandIdentifier:(id)arg3;
- (id)word;

@end
