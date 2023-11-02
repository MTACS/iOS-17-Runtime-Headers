
@interface CKAttributionViewController : UIViewController <CKAttributionStickerDetailsViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UIButton * _collapseButton;
    UICollectionView * _collectionView;
    CKAttributionViewControllerDataModel * _dataModel;
    <CKAttributionViewControllerDelegate> * _delegate;
    CKAttributionImageAndCountView * _expandedVoteCountView;
    CKAttributionCollectionViewLayout * _layout;
    CKMessagePartChatItem * _messagePartChatItem;
    CKAttributionStickerDetailsView * _stickerDetailsView;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, readonly) UIButton *collapseButton;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) CKAttributionViewControllerDataModel *dataModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAttributionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKAttributionImageAndCountView *expandedVoteCountView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKAttributionCollectionViewLayout *layout;
@property (nonatomic, readonly) CKMessagePartChatItem *messagePartChatItem;
@property (nonatomic, readonly) CKAttributionStickerDetailsView *stickerDetailsView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_animateStickerViewToVisible:(bool)arg1 completion:(id /* block */)arg2;
- (void)_animateToExpandedMode:(bool)arg1 forSection:(long long)arg2;
- (void)_animateToStickerDetails:(bool)arg1 forSection:(long long)arg2 item:(long long)arg3;
- (bool)_canAnimateToStickerDetailsForSection:(long long)arg1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (void)_handleCollapseButton:(id)arg1;
- (id)_iconViewAtIndexPath:(id)arg1;
- (bool)_updateCollectionViewFrameForLayoutMode:(long long)arg1;
- (void)_updateScrollEnabled;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)arg1;
- (void)attributionStickerDetailsView:(id)arg1 deleteButtonWasPressedForStickerChatItem:(id)arg2;
- (void)attributionStickerDetailsView:(id)arg1 downloadButtonWasPressedForStickerChatItem:(id)arg2;
- (void)attributionStickerDetailsView:(id)arg1 showInAppStoreButtonWasPressedForStickerChatItem:(id)arg2;
- (id)collapseButton;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)dataModel;
- (id)delegate;
- (id)expandedVoteCountView;
- (id)initWithMessagePartChatItem:(id)arg1;
- (id)layout;
- (id)messagePartChatItem;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)performAppearingAnimationWithDelay:(double)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)stickerDetailsView;
- (void)tapGestureRecognized:(id)arg1;
- (id)tapGestureRecognizer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
