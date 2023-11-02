
@interface CKPinnedConversationMediaObjectBubble : CKPinnedConversationTailedActivityItemView {
    long long  _activityItemViewContentScale;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewHeightConstraint;
    NSLayoutConstraint * _imageViewWidthConstraint;
    CKPinnedConversationMediaObjectActivityItem * _mediaObjectActivityItem;
    double  _pillCornerRadius;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) NSLayoutConstraint *imageViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageViewWidthConstraint;
@property (nonatomic, readonly) CKPinnedConversationMediaObjectActivityItem *mediaObjectActivityItem;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_imageViewSize;
- (id)_previewImage;
- (void)_updateImageViewSizeConstraints;
- (void)_updateMediaObjectPreview;
- (void)_updatePillCornerRadius;
- (long long)activityItemViewContentScale;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (long long)contentViewContentMode;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewPadding;
- (id)imageView;
- (id)imageViewHeightConstraint;
- (id)imageViewWidthConstraint;
- (id)initWithMediaObjectActivityItem:(id)arg1;
- (bool)isAnimojiVideo;
- (bool)isSticker;
- (id)mediaObjectActivityItem;
- (double)pillCornerRadius;
- (void)setActivityItem:(id)arg1;
- (void)setActivityItemViewContentScale:(long long)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageViewHeightConstraint:(id)arg1;
- (void)setImageViewWidthConstraint:(id)arg1;
- (void)setParentAvatarViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsActivityItemViewContentScale;
- (bool)supportsAlignmentWithOriginationSubAvatarFrame;

@end
