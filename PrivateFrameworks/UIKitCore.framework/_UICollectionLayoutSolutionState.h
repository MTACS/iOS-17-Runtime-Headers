
@interface _UICollectionLayoutSolutionState : NSObject {
    NSDictionary * _auxillaryRangeIndexerKindDict;
    NSArray * _bookmarks;
    _UIRTree * _geometricIndexer;
    _UIOrderedRangeIndexer * _itemRangeIndexer;
    _UIOrderedRangeIndexer * _preferredSizeGroupingIndexer;
    _UICollectionLayoutSectionGeometryTranslator * _sectionGeometryTranslator;
}

- (void).cxx_destruct;
- (id)description;

@end
