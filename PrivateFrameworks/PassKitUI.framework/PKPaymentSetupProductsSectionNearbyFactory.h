
@interface PKPaymentSetupProductsSectionNearbyFactory : NSObject

+ (id)_createNearbySectionFromCandidates:(id)arg1;
+ (bool)_itemsContainRegionData:(id)arg1;
+ (id)_polygonFromListItem:(id)arg1;
+ (id)_regionalListItemsUsingContext:(id)arg1 listItems:(id)arg2;
+ (void)_sortContainedProducts:(id)arg1;
+ (void)_sortExternalProducts:(id)arg1 withMapping:(id)arg2;
+ (id)_sortedItemsBasedUponProximityUsingContext:(id)arg1 listItems:(id)arg2;
+ (id)generateSectionWithDefaultSortingForItems:(id)arg1 withContext:(id)arg2;

@end
