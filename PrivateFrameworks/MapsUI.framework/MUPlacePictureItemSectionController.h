
@interface MUPlacePictureItemSectionController : MUPlaceSectionController <MUPhotoGalleryTransitionAnimator, MUPlacePhotoGalleryViewControllerDelegate, MUPlaceSectionControlling, MUPlaceTilesViewDelegate, MUScrollAnalyticActionObserving, UIViewControllerTransitioningDelegate> {
    bool  _active;
    <GEOAnnotatedItemList> * _annotatedList;
    MUPunchoutViewModel * _attributionViewModel;
    UIImageView * _imageViewForTransition;
    MUPlacePhotoGalleryViewController * _photoGalleryViewController;
    <MUPlacePictureItemSectionControllerDelegate> * _pictureItemDelegate;
    UIViewController * _presentingViewController;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
    MUPlaceSectionView * _sectionView;
    MUPlaceTilesView * _tilesView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUPlacePictureItemSectionControllerDelegate> *pictureItemDelegate;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_captureUserAction:(int)arg1;
- (void)_performPunchout;
- (void)_presentPhotoGalleryForPhotoIndex:(unsigned long long)arg1;
- (void)_setupSubviews;
- (int)analyticsModuleType;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithMapItem:(id)arg1 annotatedList:(id)arg2 presentingViewController:(id)arg3;
- (bool)isActive;
- (bool)isImpressionable;
- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (id)pictureItemDelegate;
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)placeTileCollectionView:(id)arg1 didTapOnAccessoryViewModel:(id)arg2;
- (void)placeTileCollectionView:(id)arg1 didTapOnViewModel:(id)arg2;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (void)setActive:(bool)arg1;
- (void)setPictureItemDelegate:(id)arg1;

@end
