
@interface SRCSSpokenCommand : NSObject <NSCopying> {
    SRCSCommandRecognizer * _commandRecognizer;
    id  _fstGrammar;
    NSString * _identifier;
    NSMutableDictionary * _languageModelTree;
    NSDictionary * _recognizedParameters;
    NSArray * _strings;
}

@property (readonly) NSString *identifier;
@property (retain) NSDictionary *recognizedParameters;
@property (readonly) NSArray *strings;

- (void).cxx_destruct;
- (id)_initWithSpokenCommand:(id)arg1;
- (void)_replaceBuiltInIdentiferNodesWithSubTreesInMutableLM:(id)arg1;
- (id)_uniqueCustomCommandIdentifier;
- (id)commandRecognizer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fstGrammar;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithStrings:(id)arg1;
- (id)languageModelTree;
- (id)recognizedParameters;
- (void)setCommandRecognizer:(id)arg1;
- (void)setRecognizedParameters:(id)arg1;
- (id)strings;

@end
