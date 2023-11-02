
@interface SYItemIndexingManager : NSObject

+ (id)_coreSpotlightIndexBundleID;
+ (id)_customKeyForKey:(id)arg1;
+ (void)_fetchIndexedActivitiesWithActivityType:(id)arg1 completion:(id /* block */)arg2;
+ (void)_fetchIndexedItemsLinkedToUserActivity:(id)arg1 extraFetchAttributes:(id)arg2 completion:(id /* block */)arg3;
+ (id)_postFilteredItems:(id)arg1 matchingUserActivityInfo:(id)arg2;
+ (id)_queryStringForMatchingUserActivityInfo:(id)arg1;
+ (void)fetchActivitiesWithActivityType:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchIdentifiersLinkedToUserActivity:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchLinkContextsDataForUserActivity:(id)arg1 completion:(id /* block */)arg2;
+ (void)indexedContentItemsDidChange;
+ (id)searchableItemLinkingContentItem:(id)arg1 toContainerIdentifier:(id)arg2 relatedIdentifier:(id)arg3 domainIdentifier:(id)arg4;
+ (id)searchableItemLinkingContentItem:(id)arg1 toContainerIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 relatedIdentifier:(id)arg4 domainIdentifier:(id)arg5;
+ (void)setUseLocalSearchIndex;

@end
