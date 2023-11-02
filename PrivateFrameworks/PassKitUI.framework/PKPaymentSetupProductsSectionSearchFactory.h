
@interface PKPaymentSetupProductsSectionSearchFactory : NSObject

+ (void)_applySortToSectionList:(id)arg1 usingSearchRankingMapping:(id)arg2;
+ (id)_cleanedSearchTermsFromString:(id)arg1 usingTokenizerCharacterSet:(id)arg2;
+ (id)_createSortedSectionsListFromFilteredListItems:(id)arg1;
+ (double)_distanceBetweenTerms:(id)arg1 andSearchTerms:(id)arg2;
+ (id)_filteredListItemsFromSearchFilter:(id)arg1 withContext:(id)arg2 listItems:(id)arg3 outSectionIdentifierToSearchRankingMapping:(id*)arg4;
+ (id)generateSectionsWithSearchFilter:(id)arg1 forItems:(id)arg2 withContext:(id)arg3;

@end
