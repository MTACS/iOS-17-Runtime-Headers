
@interface ATXFaceSuggestionAssetParameters : NSObject <ATXFaceSuggestionParameters> {
    ATXPosterDescriptorCache * _descriptorCache;
    NSLocale * _locale;
    NSString * _path;
    NSDictionary * _topLevelDictionary;
}

@property (nonatomic, readonly, copy) NSArray *dayZeroFeaturedDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *extensionBundleIdsEligibleForComplicationsInFaceGallery;
@property (nonatomic, readonly, copy) NSDictionary *globalPopularityScores;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *heroSectionOrder;
@property (nonatomic, readonly, copy) NSDictionary *hiddenRegions;
@property (nonatomic, readonly, copy) NSArray *sectionOrder;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *topLevelDictionary;
@property (nonatomic, readonly, copy) NSDictionary *unpromotableRegions;
@property (nonatomic, readonly, copy) NSDictionary *uprankedDateIntervals;

+ (id)_loadAssetParametersDictionaryFromPath:(id)arg1;

- (void).cxx_destruct;
- (id)_currentCountryCode;
- (id)_posterDescriptorFromKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dayZeroFeaturedDescriptors;
- (id)dictionaryForKey:(id)arg1;
- (id)extensionBundleIdsEligibleForComplicationsInFaceGallery;
- (id)globalPopularityScores;
- (id)heroSectionOrder;
- (id)hiddenRegions;
- (id)init;
- (id)sectionOrder;
- (id)topLevelDictionary;
- (id)unpromotableRegions;
- (id)uprankedDateIntervals;

@end
