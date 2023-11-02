
@interface NCNotificationListCache : NSObject <PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSMutableDictionary * _contentHiddenCellHeightCache;
    NSMutableDictionary * _contentRevealedCellHeightCache;
    <NCNotificationListCacheDelegate> * _delegate;
    NSMutableSet * _notificationListCellCache;
    NSMutableDictionary * _notificationListCellsForRequests;
    NSMutableSet * _notificationListCoalescingControlsCache;
    NSMutableSet * _notificationListCoalescingHeaderCache;
}

@property (nonatomic, readonly) unsigned long long activeNotificationCellCount;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, retain) NSMutableDictionary *contentHiddenCellHeightCache;
@property (nonatomic, retain) NSMutableDictionary *contentRevealedCellHeightCache;
@property (nonatomic, readonly) unsigned long long currentCacheSizeCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *notificationListCellCache;
@property (nonatomic, retain) NSMutableDictionary *notificationListCellsForRequests;
@property (nonatomic, retain) NSMutableSet *notificationListCoalescingControlsCache;
@property (nonatomic, retain) NSMutableSet *notificationListCoalescingHeaderCache;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedHeaderCellWithTitle:(id)arg1;
- (id)_cachedNotificationListCellForRequest:(id)arg1 viewControllerDelegate:(id)arg2 shouldConfigure:(bool)arg3;
- (id)_cachedRequestMatchingRequest:(id)arg1;
- (void)_clearAllHeightCaches;
- (id)_newCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2;
- (unsigned long long)activeNotificationCellCount;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)clearCacheForNotificationRequest:(id)arg1;
- (void)clearCachedHeightsForNotificationRequest:(id)arg1;
- (id)coalescingControlsCellWithWidth:(double)arg1;
- (id)coalescingHeaderCellWithTitle:(id)arg1 clearAllText:(id)arg2 width:(double)arg3;
- (id)contentHiddenCellHeightCache;
- (id)contentRevealedCellHeightCache;
- (unsigned long long)currentCacheSizeCount;
- (id)delegate;
- (double)heightForNotificationRequest:(id)arg1 withFrameWidth:(double)arg2 isContentRevealed:(bool)arg3 shouldCalculateHeight:(bool)arg4;
- (id)init;
- (bool)invalidateCachedHeightIfNecessaryForNotificationRequest:(id)arg1 updatedHeight:(double)arg2 isContentRevealed:(bool)arg3;
- (id)listCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2 createNewIfNecessary:(bool)arg3 shouldConfigure:(bool)arg4;
- (id)notificationListCellCache;
- (id)notificationListCellsForRequests;
- (id)notificationListCoalescingControlsCache;
- (id)notificationListCoalescingHeaderCache;
- (bool)recycleNotificationListCell:(id)arg1;
- (void)recycleNotificationListCoalescingControlsCell:(id)arg1;
- (void)recycleNotificationListCoalescingHeaderCell:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setContentHiddenCellHeightCache:(id)arg1;
- (void)setContentRevealedCellHeightCache:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationListCellCache:(id)arg1;
- (void)setNotificationListCellsForRequests:(id)arg1;
- (void)setNotificationListCoalescingControlsCache:(id)arg1;
- (void)setNotificationListCoalescingHeaderCache:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;

@end
