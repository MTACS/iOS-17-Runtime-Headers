
@protocol MPLazySectionedCollectionDataSource <NSObject>

@required

- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@optional

- (bool)hasSameContentAsDataSource:(id <MPLazySectionedCollectionDataSource>)arg1;
- (MPIdentifierSet *)identifiersForItemAtIndexPath:(NSIndexPath *)arg1;
- (MPIdentifierSet *)identifiersForSectionAtIndex:(long long)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (NSIndexPath *)indexPathForItemWithIdentifiersIntersectingSet:(MPIdentifierSet *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })optionalSectionIndexTitlesRange;
- (NSArray *)sectionIndexTitles;

@end
