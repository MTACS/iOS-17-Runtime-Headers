
@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    CNMeCardSharingOnboardingAvatarCarouselItem * _animojiItem;
    <AVTAvatarRecord> * _avatarRecord;
    UICollectionView * _collectionView;
    CNContact * _contact;
    <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> * _delegate;
    NSArray * _items;
    CNMeCardSharingOnboardingAvatarCarouselLayout * _layout;
    CNSharingProfileLogger * _logger;
    PRMonogramColor * _monogramColor;
    CNMeCardSharingOnboardingAvatarCarouselItem * _monogramItem;
    CNMeCardSharingOnboardingAvatarCarouselItem * _photoItem;
    CNMeCardSharingOnboardingAvatarCarouselItem * _photoPickerItem;
}

@property (nonatomic, retain) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem;
@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) CNMeCardSharingOnboardingAvatarCarouselLayout *layout;
@property (nonatomic, readonly) CNSharingProfileLogger *logger;
@property (nonatomic, retain) PRMonogramColor *monogramColor;
@property (nonatomic, retain) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem;
@property (nonatomic, retain) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem;
@property (nonatomic, retain) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem;
@property (nonatomic, readonly) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animojiItem;
- (id)animojiItemWithRecord:(id)arg1;
- (id)avatarRecord;
- (void)buildItems;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)contact;
- (id)contactImageItemWithContact:(id)arg1;
- (id)delegate;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;
- (id)items;
- (id)itemsForNoAnimojiAndNoPhoto;
- (id)layout;
- (id)logger;
- (id)monogramColor;
- (id)monogramImageItemWithContact:(id)arg1;
- (id)monogramItem;
- (void)notifyDelegateOfUpdateToCenterMostItem;
- (id)photoItem;
- (id)photoPickerItem;
- (void)reloadForUpdatedContactPhoto;
- (void)reloadForUpdatedMonogram;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedItem;
- (void)setAnimojiItem:(id)arg1;
- (void)setAvatarRecord:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setMonogramColor:(id)arg1;
- (void)setMonogramItem:(id)arg1;
- (void)setPhotoItem:(id)arg1;
- (void)setPhotoPickerItem:(id)arg1;
- (id)standardItems;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
