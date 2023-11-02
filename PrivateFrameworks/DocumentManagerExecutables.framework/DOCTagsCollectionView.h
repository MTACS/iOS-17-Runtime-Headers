
@interface DOCTagsCollectionView : UIView <DOCTagsCollectionItemContentViewDelegate, DocumentManagerExecutables.DOCTagsCollectionViewDataDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    <DOCTagsCollectionViewDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastIntrinsicContentSize;
    NSArray * _nodes;
    bool  _showsAddTagButton;
    NSDictionary * _sizingCells;
    _TtC26DocumentManagerExecutables25DOCTagsCollectionViewData * _tagsData;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCTagsCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } lastIntrinsicContentSize;
@property (nonatomic, retain) NSArray *nodes;
@property (nonatomic) bool showsAddTagButton;
@property (nonatomic, readonly) NSDictionary *sizingCells;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _TtC26DocumentManagerExecutables25DOCTagsCollectionViewData *tagsData;

- (void).cxx_destruct;
- (id)_cellMenuTargetForIndexPath:(id)arg1;
- (id)_indexPathOfTag:(id)arg1;
- (id)_layout;
- (void)_reloadData;
- (id)cellForIndexPath:(id)arg1 dequeueCell:(id /* block */)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (void)doc_commonInit;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })lastIntrinsicContentSize;
- (void)layoutSubviews;
- (id)nodes;
- (void)setDelegate:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setShowsAddTagButton:(bool)arg1;
- (void)setupCells:(id)arg1 registerClasses:(bool)arg2;
- (bool)showsAddTagButton;
- (id)sizingCells;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)tagsCollectionDataNeedsReload:(id)arg1;
- (void)tagsCollectionItem:(id)arg1 didDeleteTag:(id)arg2;
- (id)tagsData;
- (void)updateForChangedTraitsAffectingFonts;

@end
