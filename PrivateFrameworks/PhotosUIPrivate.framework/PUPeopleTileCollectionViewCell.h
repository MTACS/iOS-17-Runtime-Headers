
@interface PUPeopleTileCollectionViewCell : UICollectionViewCell <PXAssetCollectionActionPerformerDelegate> {
    PHAsset * _asset;
    UIImageView * _avatarImageView;
    UIButton * _menuButton;
    <PUPeopleTileDelegate> * _peopleDelegate;
    PHPerson * _person;
    PXPhotoKitAssetCollectionActionManager * _personActionManager;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousContentViewSize;
    UIView * _questionView;
    UIGraphicsImageRenderer * _renderer;
    UIView * _shadowView;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) UIImageView *avatarImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) UIButton *menuButton;
@property (nonatomic) <PUPeopleTileDelegate> *peopleDelegate;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, retain) PXPhotoKitAssetCollectionActionManager *personActionManager;
@property struct CGSize { double x1; double x2; } previousContentViewSize;
@property (nonatomic, retain) UIView *questionView;
@property (nonatomic, retain) UIGraphicsImageRenderer *renderer;
@property (nonatomic, readonly) UIView *shadowView;
@property (readonly) Class superclass;

+ (void)_fetchContactInfoForPerson:(id)arg1 completion:(id /* block */)arg2;
+ (struct CGSize { double x1; double x2; })itemSizeForTraitCollection:(id)arg1;
+ (id)sharedContactFetchQueue;

- (void).cxx_destruct;
- (void)_displayAvatarImageRequestResult:(id)arg1 faceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 person:(id)arg3 error:(id)arg4;
- (void)_fetchAvatarImageForPerson:(id)arg1;
- (void)_fetchContactImageForPerson:(id)arg1 contact:(id)arg2;
- (void)_makeKeyPhotoActionTapped:(id)arg1 asset:(id)arg2;
- (void)_nameActionTapped:(id)arg1;
- (void)_reloadAvatarImageViewForPerson:(id)arg1;
- (void)_reviewPhotosActionTapped:(id)arg1;
- (void)_setPerson:(id)arg1 asset:(id)arg2 reloadAvatar:(bool)arg3;
- (void)_setupActionsForPerson:(id)arg1 asset:(id)arg2;
- (void)_showAlbumActionTapped:(id)arg1;
- (void)_unnameActionTapped:(id)arg1 asset:(id)arg2;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (id)asset;
- (id)avatarImageView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)menuButton;
- (id)peopleDelegate;
- (id)person;
- (id)personActionManager;
- (struct CGSize { double x1; double x2; })previousContentViewSize;
- (id)questionView;
- (void)refreshPerson;
- (id)renderer;
- (void)setAsset:(id)arg1;
- (void)setPeopleDelegate:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPerson:(id)arg1 asset:(id)arg2;
- (void)setPersonActionManager:(id)arg1;
- (void)setPreviousContentViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setQuestionView:(id)arg1;
- (void)setRenderer:(id)arg1;
- (id)shadowView;
- (id)undoManagerForActionPerformer:(id)arg1;

@end
