
@interface SSPhotosResultBuilder : SSResultBuilder {
    bool  _isSyndicated;
    NSArray * _matchedPeople;
    NSArray * _peopleInPhoto;
    NSString * _photoIdentifier;
    NSArray * _photoSceneTypes;
    NSArray * _sceneLabelsIndex;
    NSArray * _scenePhotoIdentifiers;
    NSArray * _sceneSynonymsCounts;
    NSArray * _sceneSynonymsIndex;
}

@property (nonatomic) bool isSyndicated;
@property (nonatomic, retain) NSArray *matchedPeople;
@property (nonatomic, retain) NSArray *peopleInPhoto;
@property (nonatomic, retain) NSString *photoIdentifier;
@property (nonatomic, retain) NSArray *photoSceneTypes;
@property (nonatomic, retain) NSArray *sceneLabelsIndex;
@property (nonatomic, retain) NSArray *scenePhotoIdentifiers;
@property (nonatomic, retain) NSArray *sceneSynonymsCounts;
@property (nonatomic, retain) NSArray *sceneSynonymsIndex;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)buildCommand;
- (id)buildImageCardSection;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)buildThumbnail;
- (id)createSceneFrom:(id)arg1;
- (id)initWithResult:(id)arg1;
- (bool)isSyndicated;
- (id)matchedPeople;
- (id)peopleInPhoto;
- (id)photoIdentifier;
- (id)photoSceneTypes;
- (id)sceneLabelsIndex;
- (id)scenePhotoIdentifiers;
- (id)sceneSynonymsCounts;
- (id)sceneSynonymsIndex;
- (id)scenes;
- (void)setIsSyndicated:(bool)arg1;
- (void)setMatchedPeople:(id)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setPhotoIdentifier:(id)arg1;
- (void)setPhotoSceneTypes:(id)arg1;
- (void)setSceneLabelsIndex:(id)arg1;
- (void)setScenePhotoIdentifiers:(id)arg1;
- (void)setSceneSynonymsCounts:(id)arg1;
- (void)setSceneSynonymsIndex:(id)arg1;
- (int)sfSceneTypeFrom:(long long)arg1;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
