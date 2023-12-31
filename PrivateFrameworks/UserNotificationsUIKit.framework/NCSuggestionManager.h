
@interface NCSuggestionManager : NSObject <NCNotificationManagementContentProviderDelegate, NCNotificationManagementSuggestionDelegate> {
    <NCSuggestionManagerDelegate> * _delegate;
    bool  _deviceAuthenticated;
    NSMutableDictionary * _remoteSuggestions;
    NCNotificationRequest * _requestWithProvisionalNotificationManagementSuggestion;
    NSMutableSet * _requestsWithContactSuggestions;
    NSMutableSet * _requestsWithDirectMessagesManagementSuggestion;
    NSMutableSet * _requestsWithRemoteSuggestions;
    NSMutableSet * _requestsWithTimeSensitiveManagementSuggestion;
    NSMutableSet * _sectionIdentifiersWithNotificationManagementSuggestions;
    NSMutableDictionary * _suggestionContentProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCSuggestionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *remoteSuggestions;
@property (nonatomic, retain) NCNotificationRequest *requestWithProvisionalNotificationManagementSuggestion;
@property (nonatomic, retain) NSMutableSet *requestsWithContactSuggestions;
@property (nonatomic, retain) NSMutableSet *requestsWithDirectMessagesManagementSuggestion;
@property (nonatomic, retain) NSMutableSet *requestsWithRemoteSuggestions;
@property (nonatomic, retain) NSMutableSet *requestsWithTimeSensitiveManagementSuggestion;
@property (nonatomic, retain) NSMutableSet *sectionIdentifiersWithNotificationManagementSuggestions;
@property (nonatomic, retain) NSMutableDictionary *suggestionContentProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_addSuggestionForNotificationRequest:(id)arg1 managementContentProvider:(id)arg2;
- (id)_contentProviderForRequest:(id)arg1 withDigestSuggestion:(id)arg2;
- (id)_contentProviderForRequest:(id)arg1 withModeConfigurationTuningSuggestion:(id)arg2;
- (id)_contentProviderForRequest:(id)arg1 withMutingSuggestion:(id)arg2;
- (id)_contentProviderForRequest:(id)arg1 withRemoteSuggestion:(id)arg2;
- (id)_contentProviderForRequest:(id)arg1 withSendMessagesToDigestSuggestion:(id)arg2;
- (id)_contentProviderForRequest:(id)arg1 withTurnOffNotificationsForAppSuggestion:(id)arg2;
- (id)_contentProviderForRequest:(id)arg1 withUrgencyTuningSuggestion:(id)arg2;
- (bool)_createContactMatchingSuggestionIfNeededForRequest:(id)arg1 sectionSettings:(id)arg2;
- (bool)_createDirectMessagesSuggestionIfNeededForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_createNewCuratedContactMatchSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 contactName:(id)arg3;
- (void)_createNewDirectMessagesInDigestSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_createNewPromotingSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_createNewTimeSensitiveInDigestSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_createNewTimeSensitiveSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (bool)_createProvisionalAuthorizationSuggestionIfNeededForRequest:(id)arg1 sectionSettings:(id)arg2;
- (bool)_createRemoteSuggestionIfNeededForRequest:(id)arg1 remoteSuggestion:(id)arg2;
- (bool)_createTimeSensitiveSuggestionIfNeededForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_reloadSuggestionForNotificationRequest:(id)arg1 sectionSettings:(id)arg2;
- (void)_removeSuggestionIfNecessaryForNotificationRequest:(id)arg1;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (void)_updateContentForNotificationRequest:(id)arg1;
- (id)auxiliaryOptionsContentProviderForNotificationRequest:(id)arg1 isLongLook:(bool)arg2;
- (void)checkSuggestionNeededForNotificationRequest:(id)arg1;
- (void)clearSuggestionForNotificationRequest:(id)arg1;
- (id)delegate;
- (id)init;
- (bool)isDeviceAuthenticated;
- (void)logResponseForNotificationRequest:(id)arg1 allowsNotifications:(bool)arg2;
- (void)logResponseForNotificationRequest:(id)arg1 allowsTimeSensitive:(bool)arg2;
- (void)logResponseForNotificationRequest:(id)arg1 deliveryQuietly:(bool)arg2;
- (void)logResponseForNotificationRequest:(id)arg1 muted:(bool)arg2;
- (void)logResponseForNotificationRequest:(id)arg1 scheduledDelivery:(bool)arg2;
- (void)notificationManagementContentProvider:(id)arg1 hasUpdatedContentForRequest:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 keepNotificationsForSectionIdentifierForNotificationRequest:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(unsigned long long)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (void)notificationManagementContentProvider:(id)arg1 requestsRemoveSuggestionForRequest:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)notificationManagementContentProvider:(id)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)notificationManagementContentProvider:(id)arg1 setCuratedContactSuggestionConfirmed:(bool)arg2 request:(id)arg3;
- (void)notificationManagementContentProvider:(id)arg1 setModeConfiguration:(id)arg2;
- (void)notificationManagementContentProvider:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5;
- (void)notificationManagementContentProvider:(id)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)reloadContactSuggestions;
- (void)reloadRemoteSuggestions;
- (id)remoteSuggestions;
- (id)requestWithProvisionalNotificationManagementSuggestion;
- (id)requestsWithContactSuggestions;
- (id)requestsWithDirectMessagesManagementSuggestion;
- (id)requestsWithRemoteSuggestions;
- (id)requestsWithTimeSensitiveManagementSuggestion;
- (id)sectionIdentifiersWithNotificationManagementSuggestions;
- (void)setDelegate:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (void)setRemoteSuggestions:(id)arg1;
- (void)setRequestWithProvisionalNotificationManagementSuggestion:(id)arg1;
- (void)setRequestsWithContactSuggestions:(id)arg1;
- (void)setRequestsWithDirectMessagesManagementSuggestion:(id)arg1;
- (void)setRequestsWithRemoteSuggestions:(id)arg1;
- (void)setRequestsWithTimeSensitiveManagementSuggestion:(id)arg1;
- (void)setSectionIdentifiersWithNotificationManagementSuggestions:(id)arg1;
- (void)setSuggestionContentProviders:(id)arg1;
- (id)suggestionContentProviders;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;

@end
