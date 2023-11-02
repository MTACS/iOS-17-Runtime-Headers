
@interface PGMeaningCriteriaEvaluator : NSObject {
    NSArray * _allMeaningCriteriaArray;
    PGMeaningActionCriteria * _meaningActionCriteria;
    PGMeaningCriteriaInfo * _meaningCriteriaInfo;
    NSString * _meaningLabel;
    PGMeaningSceneCriteria * _meaningSceneCriteria;
}

@property (nonatomic, retain) NSArray *allMeaningCriteriaArray;
@property (nonatomic, retain) PGMeaningActionCriteria *meaningActionCriteria;
@property (nonatomic, retain) PGMeaningCriteriaInfo *meaningCriteriaInfo;
@property (nonatomic, readonly) NSString *meaningLabel;
@property (nonatomic, retain) PGMeaningSceneCriteria *meaningSceneCriteria;

+ (id)_allMeaningCriteriaClassArray;
+ (id)meaningCriteriaEvaluatorsForMeaningLabel:(id)arg1 withDictionary:(id)arg2;

- (void).cxx_destruct;
- (bool)allCriteriaIsValid;
- (bool)allCriteriaPassForAssets:(id)arg1;
- (bool)allCriteriaPassForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (id)allMeaningCriteriaArray;
- (id)description;
- (id)initWithDictionary:(id)arg1 meaningCriteriaInfo:(id)arg2;
- (id)meaningActionCriteria;
- (id)meaningCriteriaInfo;
- (id)meaningLabel;
- (id)meaningSceneCriteria;
- (void)setAllMeaningCriteriaArray:(id)arg1;
- (void)setMeaningActionCriteria:(id)arg1;
- (void)setMeaningCriteriaInfo:(id)arg1;
- (void)setMeaningSceneCriteria:(id)arg1;

@end
