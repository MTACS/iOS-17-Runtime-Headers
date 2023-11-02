
@interface INFGrammarCollection : NSObject {
    NSMutableDictionary * _sentencesDictionary;
    NSMutableDictionary * _tokensDictionary;
}

@property (nonatomic, readonly) NSArray *sentences;
@property (nonatomic, retain) NSMutableDictionary *sentencesDictionary;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, retain) NSMutableDictionary *tokensDictionary;

+ (id)grammarCollection;
+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2;
+ (id)grammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;

- (void).cxx_destruct;
- (void)addSentence:(id)arg1;
- (void)addToken:(id)arg1;
- (id)createAdjectiveWithIdentifier:(id)arg1 language:(id)arg2;
- (id)createNounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
- (id)createNounWithIdentifier:(id)arg1 language:(id)arg2;
- (id)createSentenceWithIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithGrammarCollectionNamed:(id)arg1 bundle:(id)arg2 language:(id)arg3;
- (id)sentenceWithIdentifier:(id)arg1;
- (id)sentences;
- (id)sentencesDictionary;
- (void)setSentencesDictionary:(id)arg1;
- (void)setTokensDictionary:(id)arg1;
- (id)tokenWithIdentifier:(id)arg1;
- (id)tokens;
- (id)tokensDictionary;
- (void)writeToFileAtPath:(id)arg1;

@end
