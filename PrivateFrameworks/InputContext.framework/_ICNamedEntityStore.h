
@interface _ICNamedEntityStore : NSObject {
    NSSet * _acceptedLanguages;
    unsigned long long  _durableEntitiesAdded;
    NSMutableOrderedSet * _leastRecentlyAddedEntities;
    unsigned long long  _maximumRecentlyAddedEntities;
    unsigned long long  _minimumWordLength;
    NSString * _name;
    _ICTransientLexicon * _phraseLexiconImpl;
    _ICLexiconView * _phraseLexiconView;
    unsigned long long  _recentEntitiesAdded;
    bool  _treatHyphenatedWordAsPhrase;
    _ICTransientLexicon * _wordLexiconImpl;
    _ICLexiconView * _wordLexiconView;
}

@property (nonatomic, copy) NSSet *acceptedLanguages;
@property (nonatomic, readonly) unsigned long long durableEntitiesAdded;
@property (nonatomic) unsigned long long minimumWordLength;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _ICLexiconView *phraseLexicon;
@property (nonatomic, retain) _ICTransientLexicon *phraseLexiconImpl;
@property (nonatomic, readonly) unsigned long long recentEntitiesAdded;
@property (nonatomic) bool treatHyphenatedWordAsPhrase;
@property (nonatomic, readonly) _ICLexiconView *wordLexicon;
@property (nonatomic, retain) _ICTransientLexicon *wordLexiconImpl;

+ (id)tokenize:(id)arg1;

- (void).cxx_destruct;
- (id)_adjustWordsForHyphenationIfNeeded:(id)arg1 didAdjust:(bool*)arg2;
- (struct USet { }*)_exemplarSetForCustomLocales:(id)arg1;
- (id)acceptedLanguages;
- (void)addEntity:(id)arg1 isDurable:(bool)arg2;
- (bool)areStringCharactersWhitelisted:(id)arg1;
- (unsigned long long)durableEntitiesAdded;
- (bool)entityIsHyphenatedWord:(id)arg1;
- (struct USet { }*)exemplarSetForSupportedLocales;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 maximumRecentlyAddedEntities:(unsigned long long)arg2;
- (bool)isCloserToTitleCase:(id)arg1 than:(id)arg2;
- (bool)isValidNamedEntity:(id)arg1 explanation:(id*)arg2;
- (unsigned long long)minimumWordLength;
- (id)name;
- (id)phraseLexicon;
- (id)phraseLexiconImpl;
- (unsigned long long)recentEntitiesAdded;
- (void)reloadRecents;
- (void)removeAllEntities;
- (void)setAcceptedLanguages:(id)arg1;
- (void)setMinimumWordLength:(unsigned long long)arg1;
- (void)setPhraseLexiconImpl:(id)arg1;
- (void)setTreatHyphenatedWordAsPhrase:(bool)arg1;
- (void)setWordLexiconImpl:(id)arg1;
- (bool)treatHyphenatedWordAsPhrase;
- (id)wordLexicon;
- (id)wordLexiconImpl;

@end
