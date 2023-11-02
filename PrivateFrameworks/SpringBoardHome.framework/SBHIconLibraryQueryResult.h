
@interface SBHIconLibraryQueryResult : NSObject <NSCopying> {
    SBHLocalizedIndexedCollationStrategy * _collationStrategy;
    NSDictionary * _iconForItemIdentifier;
    NSSet * _icons;
    SBHIconLibraryQuery * _query;
    unsigned long long  _queryResultIdx;
    NSDiffableDataSourceSnapshot * _snapshot;
    unsigned long long  _sortMethodology;
    unsigned long long  _totalNumberOfItems;
}

@property (nonatomic, retain) SBHLocalizedIndexedCollationStrategy *collationStrategy;
@property (nonatomic, readonly, copy) NSSet *icons;
@property (getter=isNullQueryResult, nonatomic, readonly) bool nullQueryResult;
@property (nonatomic, readonly) SBHIconLibraryQuery *query;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (nonatomic, readonly, copy) NSArray *sectionIndexTitles;
@property (nonatomic, copy) NSDiffableDataSourceSnapshot *snapshot;
@property (nonatomic, readonly) unsigned long long sortMethodology;
@property (nonatomic, readonly) unsigned long long totalNumberOfItems;

+ (void)_hydrateSnapshot:(id)arg1 fromIcons:(id)arg2 query:(id)arg3 outCollationStrategy:(id*)arg4 outIconForItemIdentifier:(id*)arg5 outSortMethodology:(unsigned long long*)arg6 sortComparator:(id /* block */)arg7;
+ (id)nullQueryResults;

- (void).cxx_destruct;
- (id)_firstExtantSectionWithCollationIndexGreaterThan:(long long)arg1;
- (id)collationStrategy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)iconAtIndexPath:(id)arg1;
- (id)iconForItemIdentifier:(id)arg1;
- (id)icons;
- (id)iconsForSectionAtIndex:(unsigned long long)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForIcon:(id)arg1;
- (id)initWithQuery:(id)arg1 icons:(id)arg2 snapshot:(id)arg3 collationStrategy:(id)arg4 iconForitemIdentifier:(id)arg5 sortMethodology:(unsigned long long)arg6;
- (id)initWithQuery:(id)arg1 icons:(id)arg2 sortComparator:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryResult:(id)arg1;
- (bool)isNullQueryResult;
- (id)itemIdentifierForIcon:(id)arg1;
- (id)query;
- (id)sectionIdentifierAtIndex:(unsigned long long)arg1;
- (id)sectionIdentifierForIcon:(id)arg1;
- (id)sectionIdentifiers;
- (id)sectionIndexTitles;
- (void)setCollationStrategy:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;
- (unsigned long long)sortMethodology;
- (id)titleForSectionAtIndex:(long long)arg1;
- (id)titleForSectionIdentifier:(id)arg1;
- (unsigned long long)totalNumberOfItems;

@end
