
@interface PKPaymentSetupProductsSectionMainFactory : NSObject

+ (id)_buildSectionIdentifierToItemIdentifierMappingFromSections:(id)arg1;
+ (void)generateSectionsWithDefaultSortingForItems:(id)arg1 withContext:(id)arg2 outSectionIdentifierToItemIdentifierMapping:(id*)arg3 outOrderedSectionIdentifiers:(id*)arg4;
+ (void)generateSectionsWithSearchFilter:(id)arg1 forItems:(id)arg2 withContext:(id)arg3 outSectionIdentifierToItemIdentifierMapping:(id*)arg4 outOrderedSectionIdentifiers:(id*)arg5;

@end
