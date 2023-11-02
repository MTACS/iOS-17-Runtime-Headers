
@interface INFPartOfSpeech : INFSentenceToken {
    unsigned long long  _gender;
    NSString * _identifier;
    NSString * _language;
    unsigned long long  _partOfSpeechType;
    NSMutableDictionary * _variants;
}

@property (nonatomic) unsigned long long gender;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) unsigned long long partOfSpeechType;
@property (nonatomic, retain) NSMutableDictionary *variants;

+ (id)adjectiveWithIdentifier:(id)arg1 language:(id)arg2;
+ (id)nounWithGender:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
+ (id)nounWithIdentifier:(id)arg1 language:(id)arg2;

- (void).cxx_destruct;
- (id)contributingSentenceContext;
- (id)dictionaryRepresentation;
- (unsigned long long)gender;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1 identifier:(id)arg2;
- (id)initWithPartOfSpeechType:(unsigned long long)arg1 identifier:(id)arg2 language:(id)arg3;
- (id)language;
- (unsigned long long)partOfSpeechType;
- (void)setGender:(unsigned long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPartOfSpeechType:(unsigned long long)arg1;
- (void)setString:(id)arg1 forVariants:(unsigned long long)arg2;
- (void)setString:(id)arg1 forVariantsDescriptor:(id)arg2;
- (void)setVariants:(id)arg1;
- (id)stringForContext:(id)arg1;
- (id)stringForVariants:(unsigned long long)arg1;
- (id)stringForVariantsDescriptor:(id)arg1;
- (void)validateSelf;
- (id)variants;

@end
