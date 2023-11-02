
@interface CNVisualIdentityAvatarStyleEditorViewController : UIViewController <CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSLayoutConstraint * _avatarViewSizeConstraint;
    NSLayoutConstraint * _avatarViewTopConstraint;
    <CNVisualIdentityAvatarStyleEditorViewControllerDelegate> * _delegate;
    CNVisualIdentityEditablePrimaryAvatarViewController * _editableAvatarViewController;
    CNPhotoPickerProviderItem * _providerItem;
    UICollectionView * _styleCollectionView;
    NSArray * _variantProviderItems;
    CNPhotoPickerVariantsManager * _variantsManager;
}

@property (nonatomic, retain) NSLayoutConstraint *avatarViewSizeConstraint;
@property (nonatomic, retain) NSLayoutConstraint *avatarViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNVisualIdentityAvatarStyleEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CNPhotoPickerProviderItem *providerItem;
@property (nonatomic, retain) UICollectionView *styleCollectionView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *variantProviderItems;
@property (nonatomic, retain) CNPhotoPickerVariantsManager *variantsManager;

- (void).cxx_destruct;
- (id)avatarViewSizeConstraint;
- (id)avatarViewTopConstraint;
- (void)beginEditingAvatar;
- (double)calculateSectionSideInset;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)delegate;
- (void)didTapEditableAvatar:(id)arg1;
- (void)dismissEmojiKeyboardIfNeeded;
- (void)dismissTextKeyboardIfNeeded;
- (id)editableAvatarViewController;
- (void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2;
- (bool)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg1;
- (void)generateProviderItems;
- (id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2;
- (bool)isEmojiProviderItemType;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)providerItem;
- (void)setAvatarViewSizeConstraint:(id)arg1;
- (void)setAvatarViewTopConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStyleCollectionView:(id)arg1;
- (void)setVariantProviderItems:(id)arg1;
- (void)setVariantsManager:(id)arg1;
- (void)setupEditableAvatarViewController;
- (void)setupStyleCollectionView;
- (bool)shouldBeginEditing;
- (id)styleCollectionView;
- (id)updatedProviderItem;
- (id)variantProviderItems;
- (id)variantsManager;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
