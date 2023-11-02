
@interface _UICollectionViewLayoutInteractionStateModule : NSObject <_UICollectionViewLayoutInteractionStateProviding> {
    UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> * _host;
    Class  _invalidationContextClass;
    NSMutableDictionary * _processingCellsMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *host;
@property (nonatomic, readonly) Class invalidationContextClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cellForItemAtIndexPath:(id)arg1;
- (bool)_itemIsSelectedOrHighlightedAndHasBackgroundFillForGroupingAtIndexPath:(id)arg1 cellGroupingPreference:(out long long*)arg2 backgroundIsInset:(out bool*)arg3;
- (void)_noteCellDidFinishProcessingAtIndexPath:(id)arg1;
- (void)_noteCellWillBeginProcessing:(id)arg1 atIndexPath:(id)arg2;
- (bool)_shouldAdjustLayoutToDrawTopSeparatorInSection:(long long)arg1;
- (bool)enumerateSectionsAfterSectionIndex:(long long)arg1 enumerator:(id /* block */)arg2;
- (id)host;
- (id)initWithHost:(id)arg1;
- (Class)invalidationContextClass;
- (bool)itemAtIndexPathIsBeingReordered:(id)arg1;
- (bool)itemAtIndexPathIsHighlighted:(id)arg1;
- (bool)itemAtIndexPathIsSelected:(id)arg1;
- (void)performPreferredAttributesProcessingBlock:(id /* block */)arg1 withLayoutAttributes:(id)arg2 forView:(id)arg3;
- (unsigned long long)selectionGroupingForItemAtIndexPath:(id)arg1;
- (void)setHost:(id)arg1;

@end
