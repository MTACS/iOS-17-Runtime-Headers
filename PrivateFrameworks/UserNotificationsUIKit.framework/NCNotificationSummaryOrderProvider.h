
@interface NCNotificationSummaryOrderProvider : NSObject <PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    long long  _atxDigestDeliveryTime;
    NSUUID * _atxUUID;
    NSArray * _cachedOrderedNotificationGroupLists;
    <NCNotificationSummaryOrderProviderDelegate> * _delegate;
    bool  _deviceAuthenticated;
    DNDMode * _dndMode;
    bool  _onboardingSummary;
    NSDate * _summaryDate;
    NSString * _summaryHeading;
    UITapGestureRecognizer * _summaryPlatterViewTapGestureRecognizer;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) long long atxDigestDeliveryTime;
@property (nonatomic, readonly, copy) NSUUID *atxUUID;
@property (nonatomic, copy) NSArray *cachedOrderedNotificationGroupLists;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationSummaryOrderProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;
@property (nonatomic, retain) DNDMode *dndMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *leadingSummaryPlatterView;
@property (getter=isOnboardingSummary, nonatomic) bool onboardingSummary;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSDate *summaryDate;
@property (nonatomic, copy) NSString *summaryHeading;
@property (nonatomic, retain) UITapGestureRecognizer *summaryPlatterViewTapGestureRecognizer;
@property (readonly) Class superclass;

+ (id)atxDigestGeneratorClient;
+ (id)atxQueue;
+ (id)notificationSummaryOrderProviderOfType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_shouldAllowTapOnLeadingSummaryPlatterView;
- (void)_tapOnSummaryPlatterView;
- (void)_updateNotificationOrderingForGroupList:(id)arg1 byATXDigestNotificationGroup:(id)arg2;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (long long)atxDigestDeliveryTime;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(bool)arg1;
- (void)atxLogSummaryPlatterRemoval;
- (void)atxLogSummaryPlatterShownIsUpcoming:(bool)arg1;
- (id)atxUUID;
- (id)atxUserNotificationsArrayForNotificationGroupLists:(id)arg1;
- (id)atxUserNotificationsForNotificationRequests:(id)arg1;
- (id)cachedOrderedNotificationGroupLists;
- (id)clearControlViewForLeadingSummaryPlatterView;
- (void)configureSummaryContentDisplaying:(id)arg1 withSummaryContentProviding:(id)arg2;
- (unsigned long long)currentNotificationCount;
- (id)delegate;
- (id)dndMode;
- (id)filterPresentNotificationGroupsInDigestNotificationGroups:(id)arg1;
- (void)generateDigestForATXUserNotificationArrays:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)init;
- (bool)isDeviceAuthenticated;
- (bool)isOnboardingSummary;
- (id)leadingSummaryPlatterView;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (id)listComponentDelegate;
- (id)materialGroupNameBase;
- (unsigned long long)notificationCountForNotificationGroupLists:(id)arg1;
- (id)notificationRequestsInNotificationGroupLists:(id)arg1;
- (id)orderedNotificationGroupLists:(id)arg1 forATXUserNotificationDigestNotificationGroup:(id)arg2 orderGroupNotifications:(bool)arg3;
- (id)representativeNotificationGroupListInGroupLists:(id)arg1 forATXUserNotificationDigestNotificationGroup:(id)arg2;
- (id)representativeNotificationRequestsForNotificationGroupLists:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAtxDigestDeliveryTime:(long long)arg1;
- (void)setCachedOrderedNotificationGroupLists:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setDndMode:(id)arg1;
- (void)setOnboardingSummary:(bool)arg1;
- (void)setSummaryDate:(id)arg1;
- (void)setSummaryHeading:(id)arg1;
- (void)setSummaryPlatterViewTapGestureRecognizer:(id)arg1;
- (id)summaryDate;
- (id)summaryHeading;
- (id)summaryPlatterViewTapGestureRecognizer;
- (id)titlesForSectionListsInSummary;
- (void)updateLeadingSummaryPlatterView;
- (void)updateSummaryOrderWithNotificationGroupLists:(id)arg1 reloadDigest:(bool)arg2;
- (void)updatedOrderedGroupLists;

@end
