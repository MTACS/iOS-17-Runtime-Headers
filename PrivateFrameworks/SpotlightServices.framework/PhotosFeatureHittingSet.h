
@interface PhotosFeatureHittingSet : NSObject {
    NSMutableSet * _hittingSet;
    NSMutableArray * _matchedFeaturesAll;
    NSMutableArray * _matchedPhotoAttributes;
    NSMutableArray * _matchedTokenAttributes;
}

@property (nonatomic, retain) NSMutableSet *hittingSet;
@property (nonatomic, retain) NSMutableArray *matchedFeaturesAll;
@property (nonatomic, retain) NSMutableArray *matchedPhotoAttributes;
@property (nonatomic, retain) NSMutableArray *matchedTokenAttributes;

- (void).cxx_destruct;
- (void)computeHitingSet;
- (id)hittingSet;
- (id)initWithPhoto:(id)arg1 query:(id)arg2 matchInfo:(id)arg3 keyboardLanguage:(id)arg4;
- (id)matchedFeaturesAll;
- (id)matchedPhotoAttributes;
- (id)matchedTokenAttributes;
- (void)selectBestPhotoAttribute:(id)arg1 photoAttributeFrequency:(float*)arg2 attributeTokenMatchPercentage:(float*)arg3 matchedFeatures:(id)arg4;
- (void)setHittingSet:(id)arg1;
- (void)setMatchedFeaturesAll:(id)arg1;
- (void)setMatchedPhotoAttributes:(id)arg1;
- (void)setMatchedTokenAttributes:(id)arg1;
- (void)setupMatchFeaturesPhoto:(id)arg1 query:(id)arg2 matchInfo:(id)arg3 keyboardLanguage:(id)arg4;
- (void)setupMatchedPhotoAttributes:(id)arg1 uniqueMatchedFeatureIndexes:(id)arg2 tokenMatchType:(unsigned long long)arg3 confidences:(id)arg4 boundingBoxes:(id)arg5 sceneSynonymsCount:(id)arg6 keyboardLanguage:(id)arg7;

@end
