
@protocol _UIDiffableDataSourceQuerying <NSObject>

@required

- (bool)containsItemIdentifier:(id)arg1;
- (bool)containsSectionIdentifier:(id)arg1;
- (long long)indexForSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (NSIndexPath *)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(NSIndexPath *)arg1;
- (NSArray *)itemIdentifiers;
- (NSArray *)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(id)arg1;
- (long long)numberOfSections;
- (id)sectionIdentifierForIndex:(long long)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (NSArray *)sectionIdentifiers;

@end
