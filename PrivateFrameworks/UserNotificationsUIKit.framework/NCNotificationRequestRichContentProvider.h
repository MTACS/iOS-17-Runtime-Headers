
@interface NCNotificationRequestRichContentProvider : NCNotificationRequestCoalescingContentProvider {
    UIImage * _cachedAttachmentImage;
    bool  _cachedAttachmentImageFeatured;
    bool  _iconVisible;
}

@property (getter=isCachedAttachmentedImageFeatured, nonatomic) bool cachedAttachmentImageFeatured;
@property (nonatomic, readonly) bool hasAttachmentImage;
@property (nonatomic, readonly) bool hasLoadedRichAttachmentImage;
@property (getter=isIconVisible, nonatomic) bool iconVisible;

+ (id)featuredImageFetchQueue;

- (void).cxx_destruct;
- (bool)_shouldShowContent;
- (void)fetchRichAttachmentImageIsFeatured:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasAttachmentImage;
- (bool)hasLoadedRichAttachmentImage;
- (bool)isCachedAttachmentedImageFeatured;
- (bool)isIconVisible;
- (void)setCachedAttachmentImageFeatured:(bool)arg1;
- (void)setIconVisible:(bool)arg1;
- (id)thumbnail;

@end
