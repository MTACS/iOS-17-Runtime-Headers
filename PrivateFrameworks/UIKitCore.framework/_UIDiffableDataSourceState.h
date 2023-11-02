
@interface _UIDiffableDataSourceState : NSObject <NSCopying, _UIDiffableDataSourceState> {
    <_UIDataSourceSnapshotTranslating> * _dataSourceSnapshot;
    NSUUID * _generationID;
    NSOrderedSet * _guaranteedPerformanceIdentifiers;
    NSOrderedSet * _guaranteedPerformanceSections;
    unsigned long long  _identifierLookupCount;
    NSOrderedSet * _identifiers;
    unsigned long long  _sectionLookupCount;
    NSOrderedSet * _sections;
}

@property (nonatomic, readonly) <_UIDataSourceSnapshotTranslating> *dataSourceSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *generationID;
@property (nonatomic, readonly) NSOrderedSet *guaranteedPerformanceIdentifiers;
@property (nonatomic, readonly) NSOrderedSet *guaranteedPerformanceSections;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOrderedSet *identifiers;
@property (nonatomic, readonly) NSOrderedSet *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)containsItemIdentifier:(id)arg1;
- (bool)containsSectionIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceSnapshot;
- (id)description;
- (void)ensureOrderedSetsHaveGuaranteedPerformance;
- (id)generationID;
- (id)guaranteedPerformanceIdentifiers;
- (id)guaranteedPerformanceSections;
- (id)identifiers;
- (long long)indexForSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)init;
- (id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4;
- (id)initWithGenerationID:(id)arg1 identifiers:(id)arg2 sections:(id)arg3 dataSourceSnapshot:(id)arg4 identifiersHaveGuaranteedPerformance:(bool)arg5 sectionsHaveGuaranteedPerformance:(bool)arg6;
- (id)initWithState:(id)arg1;
- (id)initWithStateAdvancingGenerationID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)itemIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(id)arg1;
- (long long)numberOfSections;
- (id)sectionIdentifierForIndex:(long long)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (id)sectionIndexesForItemIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)sections;
- (void)validateIdentifiers;
- (void)willBecomeWiredToDataSource;

@end
