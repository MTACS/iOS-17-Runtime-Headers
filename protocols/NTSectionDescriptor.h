
@protocol NTSectionDescriptor <NTSectionDisplayDescriptor, NTSectionFetchDescriptor, NSObject, NFCopying>

@required

- (NSString *)backingTagID;
- (unsigned long long)cachedResultCutoffTime;
- (NSString *)compactName;
- (unsigned long long)fallbackOrder;
- (NSString *)identifier;
- (unsigned long long)maximumStoriesAllocation;
- (unsigned long long)minimumStoriesAllocation;
- (NSString *)personalizationFeatureID;
- (int)promotionCriterion;
- (int)readArticlesFilterMethod;
- (NSString *)referralBarName;
- (int)seenArticlesFilterMethod;
- (long long)seenArticlesMinimumTimeSinceFirstSeenToFilter;
- (NSString *)subidentifier;
- (unsigned long long)supplementalInterSectionFilterOptions;
- (unsigned long long)supplementalIntraSectionFilterOptions;

@end
