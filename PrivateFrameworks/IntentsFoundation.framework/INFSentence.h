
@interface INFSentence : NSObject {
    INFGrammarCollection * _collection;
    NSString * _format;
    NSString * _identifier;
    NSSet * _placeholders;
    NSMutableDictionary * _placeholdersToTokens;
    NSMutableDictionary * _relationships;
}

@property (nonatomic) INFGrammarCollection *collection;
@property (nonatomic, copy) NSString *format;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *placeholders;
@property (nonatomic, retain) NSMutableDictionary *placeholdersToTokens;
@property (nonatomic, retain) NSMutableDictionary *relationships;
@property (nonatomic, readonly) NSString *resolvedSentence;

+ (id)sentenceWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)collection;
- (id)concreteToken:(id)arg1 in:(id)arg2;
- (bool)containsUnresolvedTokens:(id)arg1;
- (id)dictionaryRepresentation;
- (id)filteredPlaceholders;
- (id)format;
- (void)generatePlaceholders;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (void)placeholder:(id)arg1 dependsOn:(id)arg2;
- (id)placeholders;
- (id)placeholdersToTokens;
- (id)relationships;
- (void)reportCyclesIfAny;
- (id)resolvedSentence;
- (void)setCollection:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setNumber:(id)arg1 forPlaceholder:(id)arg2;
- (void)setPlaceholders:(id)arg1;
- (void)setPlaceholdersToTokens:(id)arg1;
- (void)setRelationships:(id)arg1;
- (void)setToken:(id)arg1 forPlaceholder:(id)arg2;
- (id)unresolvedInArray:(id)arg1;

@end
