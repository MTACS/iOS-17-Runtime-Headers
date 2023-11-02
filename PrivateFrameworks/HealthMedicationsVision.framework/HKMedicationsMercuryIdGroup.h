
@interface HKMedicationsMercuryIdGroup : NSObject {
    bool  _ingredientMatched;
    float  _maxJaccardSimilarity;
    long long  _primaryHgId;
    NSArray * _subHgIds;
}

@property (nonatomic) bool ingredientMatched;
@property (nonatomic) float maxJaccardSimilarity;
@property (nonatomic) long long primaryHgId;
@property (nonatomic, copy) NSArray *subHgIds;

- (void).cxx_destruct;
- (id)description;
- (bool)ingredientMatched;
- (float)maxJaccardSimilarity;
- (long long)primaryHgId;
- (void)setIngredientMatched:(bool)arg1;
- (void)setMaxJaccardSimilarity:(float)arg1;
- (void)setPrimaryHgId:(long long)arg1;
- (void)setSubHgIds:(id)arg1;
- (id)subHgIds;

@end
