
@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor> {
    <NTSectionQueueDescriptor> * _parentSectionQueueDescriptor;
    <NTSectionDescriptor> * _sectionDescriptor;
}

@property (nonatomic, readonly, copy) NSString *actionTitle;
@property (nonatomic, readonly, copy) NSURL *actionURL;
@property (nonatomic, readonly, copy) NSString *backgroundColorDark;
@property (nonatomic, readonly, copy) NSString *backgroundColorLight;
@property (nonatomic, readonly) NSString *backingTagID;
@property (nonatomic, readonly) unsigned long long cachedResultCutoffTime;
@property (nonatomic, readonly, copy) NSString *compactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fallbackOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long maximumStoriesAllocation;
@property (nonatomic, readonly) unsigned long long minimumStoriesAllocation;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSURL *nameActionURL;
@property (nonatomic, readonly, copy) NSString *nameColorDark;
@property (nonatomic, readonly, copy) NSString *nameColorLight;
@property (nonatomic, readonly, copy) <NTSectionQueueDescriptor> *parentSectionQueueDescriptor;
@property (nonatomic, readonly, copy) NSString *personalizationFeatureID;
@property (nonatomic, readonly) int promotionCriterion;
@property (nonatomic, readonly) int readArticlesFilterMethod;
@property (nonatomic, readonly, copy) NSString *referralBarName;
@property (nonatomic, readonly, copy) <NTSectionDescriptor> *sectionDescriptor;
@property (nonatomic, readonly) int seenArticlesFilterMethod;
@property (nonatomic, readonly) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (nonatomic, readonly, copy) NSString *subidentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supplementalInterSectionFilterOptions;
@property (nonatomic, readonly) unsigned long long supplementalIntraSectionFilterOptions;

- (void).cxx_destruct;
- (id)actionTitle;
- (id)actionURL;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (id)backgroundColorDark;
- (id)backgroundColorLight;
- (id)backingTagID;
- (unsigned long long)cachedResultCutoffTime;
- (id)compactName;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fallbackOrder;
- (id)identifier;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithSectionDescriptor:(id)arg1 parentSectionQueueDescriptor:(id)arg2;
- (unsigned long long)maximumStoriesAllocation;
- (unsigned long long)minimumStoriesAllocation;
- (id)name;
- (id)nameActionURL;
- (id)nameColorDark;
- (id)nameColorLight;
- (id)parentSectionQueueDescriptor;
- (id)personalizationFeatureID;
- (int)promotionCriterion;
- (int)readArticlesFilterMethod;
- (id)referralBarName;
- (id)sectionDescriptor;
- (int)seenArticlesFilterMethod;
- (long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
- (id)subidentifier;
- (unsigned long long)supplementalInterSectionFilterOptions;
- (unsigned long long)supplementalIntraSectionFilterOptions;

@end
