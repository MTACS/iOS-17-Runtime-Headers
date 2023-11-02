
@interface AVTAvatarAttributeEditorMulticolorSectionPickerController : NSObject <AVTAvatarAttributeEditorMulticolorPickerCellDelegate, AVTAvatarAttributeEditorSectionController, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _cachedTitleSizes;
    UICollectionView * _collectionView;
    UIView * _containerView;
    double  _currentOffsetX;
    <AVTAvatarAttributeEditorControllerSubSelectionDelegate> * _delegate;
    AVTUIEnvironment * _environment;
    UICollectionViewFlowLayout * _flowLayout;
    <AVTAvatarAttributeEditorSection> * _section;
    long long  _selectedIndex;
}

@property (nonatomic, retain) NSArray *cachedTitleSizes;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) double currentOffsetX;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTAvatarAttributeEditorSection> *section;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;

+ (double)adjustedWidthForTitleSizes:(id)arg1 items:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize { double x1; double x2; })cellSizeForItemAtIndex:(long long)arg1 forTitleSizes:(id)arg2 items:(id)arg3 forContainerWidth:(double)arg4;
+ (struct CGPoint { double x1; double x2; })clampedContentOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 collectionView:(id)arg2;
+ (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
+ (double)estimatedContentHeightForWrappingTitleSizes:(id)arg1 items:(id)arg2 forWidth:(double)arg3;
+ (double)estimatedContentWidthForTitleSizes:(id)arg1 items:(id)arg2;
+ (double)estimatedContentWidthForWrappingTitleSizes:(id)arg1 items:(id)arg2 forWidth:(double)arg3;
+ (bool)shouldScrollGivenTitleSizes:(id)arg1 fittingWidth:(double)arg2 items:(id)arg3;
+ (bool)shouldWrapTitlesForTitleSizes:(id)arg1 items:(id)arg2 forWidth:(double)arg3;
+ (bool)supportsSelection;

- (void).cxx_destruct;
- (void)attributeSection:(id)arg1 didChangeValueForSectionItem:(id)arg2;
- (void)cacheTitleSizes;
- (id)cachedTitleSizes;
- (void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForItemAtIndex:(long long)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)containerView;
- (void)createCollectionView;
- (double)currentOffsetX;
- (double)currentRelativeContentOffsetX;
- (id)delegate;
- (void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2;
- (void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(id /* block */)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)environment;
- (bool)evaluateDisplayCondition:(id)arg1;
- (id)flowLayout;
- (unsigned long long)indexForItem:(id)arg1;
- (void)invalidateLayoutForNewContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)multicolorPickerCellDidTapClearButton:(id)arg1;
- (long long)numberOfItems;
- (id)prefetchingSectionItemForIndex:(long long)arg1;
- (void)resetToDefaultState;
- (id)section;
- (id)sectionView;
- (long long)selectedIndex;
- (void)setCachedTitleSizes:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCurrentOffsetX:(double)arg1;
- (void)setCurrentRelativeContentOffsetX:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForFocusingItemAtIndex:(long long)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })sizeForItemAtIndex:(long long)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)updateInsetsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithSection:(id)arg1;
- (id)viewForIndex:(long long)arg1;

@end
