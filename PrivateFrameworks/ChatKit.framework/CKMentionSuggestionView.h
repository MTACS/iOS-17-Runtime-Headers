
@interface CKMentionSuggestionView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    UICollectionView * _collectionView;
    <CKMentionSuggestionViewDataSource> * _dataSource;
    <CKMentionSuggestionViewDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    bool  _hasCompletedInitialLayoutPass;
    UICollectionViewCompositionalLayout * _suggestionViewLayout;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) <CKMentionSuggestionViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKMentionSuggestionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic) bool hasCompletedInitialLayoutPass;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UICollectionViewCompositionalLayout *suggestionViewLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)diffableDataSource;
- (bool)hasCompletedInitialLayoutPass;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)reloadData;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setHasCompletedInitialLayoutPass:(bool)arg1;
- (void)setSuggestionViewLayout:(id)arg1;
- (id)suggestionViewLayout;
- (void)suggestionsDidChange;
- (id)suggestionsLayout;
- (id)suggestionsLayoutSectionForEnvironment:(id)arg1;

@end
