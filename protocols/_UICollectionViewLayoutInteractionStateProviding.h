
@protocol _UICollectionViewLayoutInteractionStateProviding <NSObject>

@required

- (bool)_shouldAdjustLayoutToDrawTopSeparatorInSection:(long long)arg1;
- (bool)enumerateSectionsAfterSectionIndex:(void *)arg1 enumerator:(void *)arg2; // needs 2 arg types, found 11: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCollectionLayoutSection *, long long, long long, double, bool*, void*
- (Class)invalidationContextClass;
- (bool)itemAtIndexPathIsBeingReordered:(NSIndexPath *)arg1;
- (bool)itemAtIndexPathIsHighlighted:(NSIndexPath *)arg1;
- (bool)itemAtIndexPathIsSelected:(NSIndexPath *)arg1;
- (unsigned long long)selectionGroupingForItemAtIndexPath:(NSIndexPath *)arg1;

@end
