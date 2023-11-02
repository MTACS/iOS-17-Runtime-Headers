
@interface MPModelForYouRecommendationGroup : MPModelObject {
    bool  _groupRecommendation;
    NSURL * _refreshURL;
}

@property (nonatomic) bool displaysAsGridCellInCarPlay;
@property (nonatomic) bool displaysAsTitledSectionWithRowsInCarPlay;
@property (getter=isGroupRecommendation, nonatomic) bool groupRecommendation;
@property (nonatomic) unsigned long long groupType;
@property (nonatomic, copy) NSURL *hrefURL;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (nonatomic, copy) NSURL *refreshURL;
@property (nonatomic) long long sectionIndex;
@property (nonatomic, retain) MPSectionedCollection *sectionedItems;
@property (nonatomic, copy) NSArray *subgroups;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long traits;

+ (void)__MPModelForYouRecommendationGroupPropertyDisplaysAsGridCellInCarPlay__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyDisplaysAsTitledSectionWithRowsInCarPlay__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyGroupType__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyHrefURL__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyLastUpdatedDate__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyLoadAdditionalContentURL__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyRefreshURL__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertySectionIndex__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertySectionedItems__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertySubgroups__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyTitle__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyTraits__MAPPING_MISSING__;
+ (id)__displaysAsGridCellInCarPlay_KEY;
+ (id)__displaysAsTitledSectionWithRowsInCarPlay_KEY;
+ (id)__groupType_KEY;
+ (id)__hrefURL_KEY;
+ (id)__lastUpdatedDate_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__refreshURL_KEY;
+ (id)__sectionIndex_KEY;
+ (id)__sectionedItems_KEY;
+ (id)__subgroups_KEY;
+ (id)__title_KEY;
+ (id)__traits_KEY;
+ (id)classesForSecureCoding;

- (void).cxx_destruct;
- (bool)isGroupRecommendation;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)refreshURL;
- (void)setGroupRecommendation:(bool)arg1;
- (void)setRefreshURL:(id)arg1;

@end
