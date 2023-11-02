
@interface CLSSocialServiceCoreNameParser : CLSSocialService {
    NPNameParser * _nameParser;
    NSCharacterSet * _nonLetterCharacterSet;
    NSMutableDictionary * _regularExpressionByRelationshipByLocale;
    NSMutableDictionary * _sexHintByCNIdentifier;
    NSDictionary * _vocabularyByRelationshipByLocale;
}

@property (retain) NPNameParser *nameParser;
@property (nonatomic, retain) NSCharacterSet *nonLetterCharacterSet;
@property (nonatomic, retain) NSMutableDictionary *regularExpressionByRelationshipByLocale;
@property (nonatomic, retain) NSMutableDictionary *sexHintByCNIdentifier;
@property (nonatomic, retain) NSDictionary *vocabularyByRelationshipByLocale;

+ (id)_dictionaryKeyForPersonRelationship:(unsigned long long)arg1;
+ (unsigned long long)_personRelationshipFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_normalizeName:(id)arg1;
- (id)_parentRelationships;
- (id)_regularExpressionForRelationship:(unsigned long long)arg1 languageCode:(id)arg2;
- (unsigned long long)_sexHintForRelationship:(unsigned long long)arg1;
- (id)init;
- (void)invalidateMemoryCaches;
- (id)nameParser;
- (id)nonLetterCharacterSet;
- (id)regularExpressionByRelationshipByLocale;
- (unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (void)setNameParser:(id)arg1;
- (void)setNonLetterCharacterSet:(id)arg1;
- (void)setRegularExpressionByRelationshipByLocale:(id)arg1;
- (void)setSexHintByCNIdentifier:(id)arg1;
- (void)setVocabularyByRelationshipByLocale:(id)arg1;
- (id)sexHintByCNIdentifier;
- (unsigned long long)sexHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (id)vocabularyByRelationshipByLocale;

@end
