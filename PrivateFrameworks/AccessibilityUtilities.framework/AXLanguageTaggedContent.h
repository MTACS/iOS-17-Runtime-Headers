
@interface AXLanguageTaggedContent : NSObject {
    NSMutableString * _contentString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _currentChunk;
    NSArray * _currentDialects;
    void * _namedEntityTagger;
    unsigned long long  _nextShorthandDateIndex;
    void * _nlTagger;
    bool  _predictedByTagger;
    NSMutableOrderedSet * _predictedSecondaryLangMaps;
    NSArray * _shorthandDateMatches;
    bool  _tagged;
    NSMutableArray * _tags;
    NSMutableOrderedSet * _unpredictedAmbiguousLangMaps;
    NSString * _userPreferredLangID;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, retain) NSMutableString *contentString;
@property (nonatomic, retain) NSArray *currentDialects;
@property (nonatomic) unsigned long long nextShorthandDateIndex;
@property (nonatomic, retain) NSMutableOrderedSet *predictedSecondaryLangMaps;
@property (nonatomic, retain) NSArray *shorthandDateMatches;
@property (getter=isTagged, nonatomic) bool tagged;
@property (nonatomic, retain) NSMutableArray *tags;
@property (nonatomic, retain) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;
@property (nonatomic, copy) NSString *userPreferredLangID;

- (void).cxx_destruct;
- (bool)_addLanguageTagForCurrentChunk;
- (bool)_addLanguageTagForDateIfNecessary;
- (void)_addTag;
- (id)_allLangIDs;
- (void)_debugLog:(id)arg1 token:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 script:(id)arg4 dialects:(id)arg5;
- (bool)_isNamedEntity:(id)arg1;
- (bool)_isStringCombinationOfCommonAndEmoji:(id)arg1;
- (struct { int x1; float x2; }*)_languageHintsEvenlyDistributedWithProbability:(float)arg1 excludingHints:(id)arg2;
- (void)_manuallyProcessContentWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_overrideLanguageDetection:(id)arg1;
- (id)_preferredLanguagesForTagging;
- (void)_searchForShorthandDates;
- (id)ambiguousLangMaps;
- (void)appendLanguageTaggedContent:(id)arg1;
- (id)content;
- (id)contentString;
- (id)currentDialects;
- (void)dealloc;
- (id)description;
- (void)enumeratePredictedTags:(id /* block */)arg1;
- (void)enumerateUnpredictedTags:(id /* block */)arg1;
- (bool)hasOnlyNonWesternLangMaps;
- (bool)hasOnlyWesternLangMaps;
- (id)initWithContent:(id)arg1;
- (bool)isTagged;
- (id)langCodeForlangId:(int)arg1;
- (int)langIDforLangCode:(id)arg1;
- (bool)langMapIsSignificant:(id)arg1;
- (unsigned long long)nextShorthandDateIndex;
- (id)predictedSecondaryLangMaps;
- (id)primaryAmbiguousDialect;
- (id)primaryUnambiguousDialect;
- (void)setContentString:(id)arg1;
- (void)setCurrentDialects:(id)arg1;
- (void)setNextShorthandDateIndex:(unsigned long long)arg1;
- (void)setPredictedSecondaryLangMaps:(id)arg1;
- (void)setShorthandDateMatches:(id)arg1;
- (void)setTagged:(bool)arg1;
- (void)setTags:(id)arg1;
- (void)setUnpredictedAmbiguousLangMaps:(id)arg1;
- (void)setUserPreferredLangID:(id)arg1;
- (id)shorthandDateMatches;
- (id)significantAmbiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (void)tagContent;
- (id)tags;
- (id)unambiguousLangMaps;
- (id)unpredictedAmbiguousLangMaps;
- (void)updateTagsForLocalePrefChange;
- (id)userPreferredLangID;

@end
