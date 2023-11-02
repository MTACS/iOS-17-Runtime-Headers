
@interface TISceneTaxonomyGenerator : NSObject {
    NSMutableDictionary * _matchingPhrasesToID;
    NSArray * _notSupportingInputModes;
    NSSet * _phraseSet;
    <PFSceneTaxonomy_Staging106165582> * _sceneTaxonomy;
    NLTagger * _tagger;
    NSSet * _taxonomyIdentifiers;
    NSSet * _taxonomyIdentifiersAllowListSynonymExclusions;
}

@property (nonatomic, readonly) NSMutableDictionary *matchingPhrasesToID;
@property (nonatomic, retain) NSArray *notSupportingInputModes;

- (void).cxx_destruct;
- (void)createPhrases;
- (void)createTaxonomyIdentifiers;
- (id)extractTokensForStickerComputation:(id)arg1;
- (id)generateQueries:(id)arg1;
- (id)generateSearchableQueries:(id)arg1;
- (id)generateSearchableQueriesForText:(id)arg1;
- (id)generateTokens:(id)arg1;
- (id)generateTokensFromInputString:(id)arg1;
- (void)getTagger;
- (id)init;
- (id)matchingPhrasesToID;
- (id)notSupportingInputModes;
- (void)setNotSupportingInputModes:(id)arg1;

@end
