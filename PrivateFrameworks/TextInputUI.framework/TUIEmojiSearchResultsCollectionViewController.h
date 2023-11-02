
@interface TUIEmojiSearchResultsCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    bool  _animatingCellUpdates;
    unsigned long long  _animationBeginOffset;
    bool  _cellHighlightFrozen;
    UICollectionViewDiffableDataSource * _dataSource;
    <TUIEmojiSearchResultsCollectionViewControllerDelegate> * _delegate;
    NSArray * _displayedEmojis;
    bool  _displayingNoResultsLabel;
    bool  _displayingVerbatimResults;
    _InvertibleFlowLayout * _flowLayout;
    unsigned long long  _lastAnimatedCellCount;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UILabel * _noResultsLabel;
    NSArray * _placeholderIdentifiers;
}

@property (getter=isCellHighlightFrozen, nonatomic) bool cellHighlightFrozen;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUIEmojiSearchResultsCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayedEmojis;
@property (nonatomic) bool displayingNoResultsLabel;
@property (nonatomic) bool displayingVerbatimResults;
@property (nonatomic, retain) _InvertibleFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) UILabel *noResultsLabel;
@property (readonly) Class superclass;

+ (id)emojiTextAttributes;

- (void).cxx_destruct;
- (void)_didRecognizeLongPressGesture:(id)arg1;
- (bool)_isSelectableEmojiTokenAtIndexPath:(id)arg1;
- (id)_userPreferredEmojiStringVariantForToken:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)configuredEmojiCollectionViewCellForCollectionView:(id)arg1 atIndexPath:(id)arg2 forEmojiString:(id)arg3;
- (id)dataSource;
- (id)delegate;
- (id)displayedEmojis;
- (bool)displayingNoResultsLabel;
- (bool)displayingVerbatimResults;
- (id)flowLayout;
- (id)init;
- (bool)isCellHighlightFrozen;
- (id)longPressGestureRecognizer;
- (id)noResultsLabel;
- (void)resetScrollPositionAnimated:(bool)arg1;
- (void)setCellHighlightFrozen:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedEmojis:(id)arg1;
- (void)setDisplayedEmojis:(id)arg1 verbatimSkinTones:(bool)arg2 animated:(bool)arg3;
- (void)setDisplayingNoResultsLabel:(bool)arg1;
- (void)setDisplayingNoResultsLabel:(bool)arg1 animated:(bool)arg2;
- (void)setDisplayingVerbatimResults:(bool)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setNoResultsLabel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
