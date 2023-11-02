
@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSMutableArray * _coalescedNotificationRequests;
    NSString * _collapsedSectionSummaryString;
    NSNumberFormatter * _decimalFormatter;
    bool  _deviceAuthenticated;
    NCNotificationSummaryBuilder * _overridenSummaryBuilder;
    bool  _showSummaryFooterText;
    bool  _showSummaryTextAsContent;
    NCNotificationSummaryBuilder * _summaryBuilder;
}

@property (nonatomic, retain) NSMutableArray *coalescedNotificationRequests;
@property (nonatomic, copy) NSString *collapsedSectionSummaryString;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;
@property (nonatomic, retain) NCNotificationSummaryBuilder *overridenSummaryBuilder;
@property (nonatomic) bool showSummaryFooterText;
@property (nonatomic) bool showSummaryTextAsContent;

- (void).cxx_destruct;
- (id)_activeSummaryBuilder;
- (unsigned long long)_indexOfMatchingNotificationRequest:(id)arg1;
- (id)_localizedStringWithPlaceholderFormat:(id)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_notificationCount;
- (id)_placeholderSecondaryText;
- (bool)_shouldShowNotificationBody;
- (void)_updateSummaryText;
- (unsigned long long)coalesceCount;
- (void)coalesceNotificationRequest:(id)arg1;
- (id)coalescedNotificationRequests;
- (id)collapsedSectionSummaryString;
- (id)communicationAvatar;
- (bool)containsMatchingCoalescedNotificationRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)footerText;
- (id)icons;
- (id)importantText;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;
- (id)inlineAction;
- (bool)isDeviceAuthenticated;
- (bool)isHidingContent;
- (id)notificationRequest;
- (id)overridenSummaryBuilder;
- (id)primarySubtitleText;
- (id)primaryText;
- (void)removeCoalescedNotificationRequest:(id)arg1;
- (id)secondaryText;
- (void)setCoalescedNotificationRequests:(id)arg1;
- (void)setCollapsedSectionSummaryString:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setOverridenSummaryBuilder:(id)arg1;
- (void)setShowSummaryFooterText:(bool)arg1;
- (void)setShowSummaryTextAsContent:(bool)arg1;
- (bool)showSummaryFooterText;
- (bool)showSummaryTextAsContent;
- (id)summaryText;
- (id)thumbnail;
- (void)updateCoalescedNotificationRequest:(id)arg1;

@end
