
@interface SRCSCommandRecognitionSystem : NSObject {
    NSString * _localeIdentifier;
    NSMutableArray * _recognizers;
    NSMutableDictionary * _resolvedBuiltInIdentifiers;
    NSArray * _targetTypes;
}

@property (readonly, retain) NSString *localeIdentifier;
@property (readonly, retain) NSArray *recognizers;
@property (nonatomic, readonly) NSArray *targetTypes;

- (void).cxx_destruct;
- (void)_initalizeLanguageModelTree;
- (void)_testWithPhrases:(id)arg1;
- (void)addRecognizer:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)languageModelTreeForBuiltInLMIdentifier:(id)arg1;
- (id)localeIdentifier;
- (id)recognizers;
- (id)spokenCommandFromRecognizedAFSpeechPhrases:(id)arg1;
- (id)spokenCommandFromRecognizedEARTokenSausage:(struct __CFArray { }*)arg1;
- (id)targetTypes;

@end
