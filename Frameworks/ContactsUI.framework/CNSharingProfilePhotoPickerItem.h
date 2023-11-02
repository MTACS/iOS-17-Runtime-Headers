
@interface CNSharingProfilePhotoPickerItem : NSObject {
    CNSharingProfileAvatarItem * _avatarItem;
    UIImage * _cachedPreviewImage;
    NSString * _symbolImageName;
}

@property (nonatomic, retain) CNSharingProfileAvatarItem *avatarItem;
@property (nonatomic, retain) UIImage *cachedPreviewImage;
@property (nonatomic, retain) NSString *symbolImageName;

- (void).cxx_destruct;
- (id)avatarItem;
- (id)cachedPreviewImage;
- (id)compositeImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)originalImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAvatarItem:(id)arg1;
- (void)setCachedPreviewImage:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (id)symbolImageName;

@end
