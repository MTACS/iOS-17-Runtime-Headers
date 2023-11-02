
@interface NCDigestFeaturedNotificationContentProvider : NCNotificationRequestCoalescingContentProvider {
    unsigned long long  _appNotificationCount;
    UIImage * _cachedFeaturedAttachmentImage;
    double  _cachedImageSizeRatio;
    id /* block */  _defaultActionBlock;
    unsigned long long  _groupCount;
    <NCNotificationListComponentDelegate> * _listComponentDelegate;
}

@property (nonatomic) unsigned long long appNotificationCount;
@property (nonatomic) double cachedImageSizeRatio;
@property (nonatomic, copy) id /* block */ defaultActionBlock;
@property (nonatomic, readonly) bool hasAttachmentImage;
@property (nonatomic) <NCNotificationListComponentDelegate> *listComponentDelegate;

+ (id)featuredImageFetchQueue;

- (void).cxx_destruct;
- (bool)_shouldShowContent;
- (unsigned long long)appNotificationCount;
- (double)cachedImageSizeRatio;
- (id /* block */)defaultActionBlock;
- (void)fetchFeaturedAttachmentImageWithSizeRatio:(double)arg1 completion:(id /* block */)arg2;
- (bool)hasAttachmentImage;
- (id)initWithNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 groupCount:(unsigned long long)arg2;
- (id)listComponentDelegate;
- (id)primaryText;
- (void)setAppNotificationCount:(unsigned long long)arg1;
- (void)setCachedImageSizeRatio:(double)arg1;
- (void)setDefaultActionBlock:(id /* block */)arg1;
- (void)setListComponentDelegate:(id)arg1;
- (id)thumbnail;

@end
