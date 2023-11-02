
@interface NCNotificationRequestFullScreenContentProvider : NCNotificationRequestCoalescingContentProvider {
    UIImage * _fullScreenThumbnail;
    bool  _imageAssetLoadingComplete;
}

@property (getter=_fullScreenThumbnail, setter=_setFullScreenThumbnail:, nonatomic, retain) UIImage *fullScreenThumbnail;
@property (getter=isImageAssetLoadingComplete, readonly) bool imageAssetLoadingComplete;

- (void).cxx_destruct;
- (id)_fullScreenThumbnail;
- (id)_newAvatarView;
- (void)_setFullScreenThumbnail:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)icons;
- (id)importantAttributedTextWithImageConfiguration:(id)arg1;
- (id)importantText;
- (bool)isImageAssetLoadingComplete;
- (void)loadImageAssetsWithCompletion:(id /* block */)arg1;
- (id)thumbnail;

@end
