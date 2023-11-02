
@interface PRSRankingConfiguration : NSObject {
    bool  _allow_coreduet_influence;
    NSMutableDictionary * _categoryEngagements;
    NSMutableOrderedSet * _cepBlocklistSet;
    bool  _disableResultTruncation;
    NSNumber * _localResultQualityThreshold;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mutex;
    float  _numAppsDeduped;
    NSArray * _parsecCategoryOrder;
    NSMutableDictionary * _queryDependentCategoryProbabilities;
    SSPlistDataReader * _queryIndependentCategoryProbabilities;
    NSArray * _rankingQueries;
    NSDictionary * _serverFeatures;
    NSString * _shortcutSectionBundleID;
    NSDictionary * _sqfData;
}

@property (nonatomic) bool allow_coreduet_influence;
@property (nonatomic, retain) NSMutableDictionary *categoryEngagements;
@property (nonatomic, retain) NSMutableOrderedSet *cepBlocklistSet;
@property (nonatomic) bool disableResultTruncation;
@property (nonatomic, retain) NSNumber *localResultQualityThreshold;
@property (nonatomic) float numAppsDeduped;
@property (nonatomic, retain) NSArray *parsecCategoryOrder;
@property (nonatomic, retain) NSMutableDictionary *queryDependentCategoryProbabilities;
@property (nonatomic, retain) SSPlistDataReader *queryIndependentCategoryProbabilities;
@property (nonatomic, retain) NSArray *rankingQueries;
@property (nonatomic, retain) NSDictionary *serverFeatures;
@property (nonatomic, retain) NSString *shortcutSectionBundleID;
@property (nonatomic, retain) NSDictionary *sqfData;

- (void).cxx_destruct;
- (bool)allow_coreduet_influence;
- (void)appendToExistingCEPBlocklist:(id)arg1;
- (id)categoryEngagements;
- (id)cepBlocklistSet;
- (bool)disableResultTruncation;
- (float)engagementProbabilityForCategory:(id)arg1;
- (id)init;
- (id)localResultQualityThreshold;
- (void)lock;
- (float)maxEngagementProbability;
- (void)mergeWith:(id)arg1;
- (float)numAppsDeduped;
- (id)parsecCategoryOrder;
- (id)queryDependentCategoryProbabilities;
- (double)queryDependentProbabilityForCategory:(id)arg1;
- (id)queryIndependentCategoryProbabilities;
- (double)queryIndependentProbabilityForCategory:(id)arg1;
- (id)rankingQueries;
- (id)serverFeatures;
- (void)setAllow_coreduet_influence:(bool)arg1;
- (void)setCategoryEngagements:(id)arg1;
- (void)setCepBlocklistSet:(id)arg1;
- (void)setDisableResultTruncation:(bool)arg1;
- (void)setLocalResultQualityThreshold:(id)arg1;
- (void)setNumAppsDeduped:(float)arg1;
- (void)setParsecCategoryOrder:(id)arg1;
- (void)setQueryDependentCategoryProbabilities:(id)arg1;
- (void)setQueryIndependentCategoryProbabilities:(id)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setShortcutSectionBundleID:(id)arg1;
- (void)setSqfData:(id)arg1;
- (id)shortcutSectionBundleID;
- (id)sqfData;
- (void)unlock;
- (void)updateQueryDependentProbabilityAndBlocklistSetWith:(id)arg1;
- (void)updateWithSQFData:(id)arg1;

@end
