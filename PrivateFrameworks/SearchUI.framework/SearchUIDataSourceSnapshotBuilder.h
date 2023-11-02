
@interface SearchUIDataSourceSnapshotBuilder : NSObject {
    NSSet * _expandedCollectionSections;
    NSSet * _expandedSections;
    NSMutableSet * _rowModelIdentifiers;
    NSMutableSet * _sectionModelIdentifiers;
}

@property (nonatomic, retain) NSSet *expandedCollectionSections;
@property (nonatomic, retain) NSSet *expandedSections;
@property (nonatomic, retain) NSMutableSet *rowModelIdentifiers;
@property (nonatomic, retain) NSMutableSet *sectionModelIdentifiers;

- (void).cxx_destruct;
- (id)asyncRowManagersForCardSections:(id)arg1;
- (id)buildCombinedRowModelsFromRowModels:(id)arg1 result:(id)arg2;
- (id)buildRowModelFromCardSection:(id)arg1 result:(id)arg2;
- (id)buildRowModelsFromCardSections:(id)arg1 result:(id)arg2 isInline:(bool)arg3 queryId:(unsigned long long)arg4;
- (id)buildRowModelsFromResult:(id)arg1;
- (id)buildRowModelsFromResultSections:(id)arg1 queryId:(unsigned long long)arg2;
- (id)buildRowModelsFromSectionModels:(id)arg1;
- (id)buildSectionFromRowModels:(id)arg1 section:(id)arg2;
- (id)buildSectionsFromCardSections:(id)arg1 result:(id)arg2 usesInlineStyle:(bool)arg3 queryId:(unsigned long long)arg4;
- (id)buildSectionsFromResultSections:(id)arg1 queryId:(unsigned long long)arg2;
- (id)buildSectionsFromRowModels:(id)arg1 fromSection:(id)arg2;
- (id)buildSectionsFromRowModels:(id)arg1 fromSections:(id)arg2;
- (id)buildSnapshotForSectionModels:(id)arg1;
- (id)buildSnapshotFromResultSections:(id)arg1 queryId:(unsigned long long)arg2;
- (id)buildSnapshotFromTableModel:(id)arg1;
- (id)buildUISectionFromResultSection:(id)arg1 collectionSection:(id)arg2;
- (id)expandedCollectionSections;
- (id)expandedSections;
- (id)generateComposedItemIdentifierForResults:(id)arg1;
- (id)generateItemIdentifier:(id)arg1 cardSection:(id)arg2;
- (id)generateIterativeIdentifierForBaseIdentifier:(id)arg1 withUnavailableIdentifiers:(id)arg2;
- (id)generateSectionIdentifier:(id)arg1 collectionSection:(id)arg2;
- (id)gridLayoutsForCardSections:(id)arg1;
- (id)init;
- (id)initWithExpandedSections:(id)arg1 expandedCollectionSections:(id)arg2;
- (id)initWithExpandedSections:(id)arg1 expandedCollectionSections:(id)arg2 rowModelIdentifiers:(id)arg3 sectionModelIdentifiers:(id)arg4;
- (id)initWithSnapshot:(id)arg1;
- (bool)resultHasHorizontallyGroupedCardSections:(id)arg1;
- (id)resultsForMultiResultRowInSection:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (id)rowModelIdentifiers;
- (id)sectionModelIdentifiers;
- (void)setExpandedCollectionSections:(id)arg1;
- (void)setExpandedSections:(id)arg1;
- (void)setRowModelIdentifiers:(id)arg1;
- (void)setSectionModelIdentifiers:(id)arg1;

@end
