
@interface MPModelStoreBrowseSection : MPModelObject {
    bool  _containsOnlyEditorialElements;
}

@property (getter=isBrick, nonatomic) bool brick;
@property (nonatomic) bool containsOnlyEditorialElements;
@property (nonatomic) bool displaysAsGridCellInCarPlay;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (getter=isMemberOfChartSet, nonatomic) bool memberOfChartSet;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic) long long sectionType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long uniformContentItemType;

+ (void)__MPModelStoreBrowseSectionPropertyBrick__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionPropertyDisplaysAsGridCellInCarPlay__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionPropertyLoadAdditionalContentURL__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionPropertyMemberOfChartSet__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionPropertyPreviouslyRetrievedNestedResponse__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionPropertyTitle__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionPropertyType__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionPropertyUniformContentItemType__MAPPING_MISSING__;
+ (void)__MPModelStoreBrowseSectionRelationshipRadioStation__MAPPING_MISSING__;
+ (id)__brick_KEY;
+ (id)__displaysAsGridCellInCarPlay_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__memberOfChartSet_KEY;
+ (id)__previouslyRetrievedNestedResponse_KEY;
+ (id)__radioStation_KEY;
+ (id)__sectionType_KEY;
+ (id)__title_KEY;
+ (id)__uniformContentItemType_KEY;

- (bool)containsOnlyEditorialElements;
- (void)setContainsOnlyEditorialElements:(bool)arg1;

@end
