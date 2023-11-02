
@interface StickersUI.StickerCollectionViewController : UICollectionViewController <AVTStickerRecentsSwiftProviderDelegate, UICollectionViewDataSourcePrefetching, UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_stickerCache;
    void addContextToRun;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  addingRecentStickerIdentifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  addingStickerIdentifier;
    void allowsAnimation;
    void animationContextImageView;
    void collectionLayout;
    void completionHandlerWaitingForStickerBound;
    void completionHandlerWaitingForStickerDisplay;
    void dataSource;
    void delegate;
    void editMenuInteraction;
    void hiddenStickerViewAnimationStartTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  hiddenStickerViewIdentifier;
    void insertLocationMarker;
    void isArranging;
    void isPresentingEditMenu;
    void isShowingPhotosPicker;
    void isStickerEffectPaused;
    void keyline;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  needsMenuPresentationStickerIdentifier;
    void placeholderImageView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  storeType;
    void touchOffsetForMovingCell;
    void traitChangeRegistration;
    void transitionAnimator;
}

@property (nonatomic) <_TtP10StickersUI38StickerProvidingViewControllerDelegate_> *delegate;

- (void).cxx_destruct;
- (void)_bridgedUpdateContentUnavailableConfigurationUsingState:(id)arg1;
- (void)avtStickerRecentRenderedWithIdentifier:(id)arg1 localizedDescription:(id)arg2 image:(id)arg3 url:(id)arg4 avatarRecordIdentifier:(id)arg5 stickerConfigurationIdentifier:(id)arg6;
- (void)avtStickerRecentStoreDidChange;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)handleStickerCreationProgressUpdateNotification:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)makeStickerFromPhotoPicker;
- (void)photoPickerDidDismiss;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
