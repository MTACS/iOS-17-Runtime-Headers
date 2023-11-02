
@protocol CSNotificationDestination <CSCoverSheetParticipating, SBFNotificationExtensionVisibilityProviding, SBFNotificationLongLookPresenting>

@required

- (<CSNotificationDispatcher> *)dispatcher;
- (void)notificationsLoadedForSectionIdentifier:(NSString *)arg1;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1;
- (void)setDispatcher:(id <CSNotificationDispatcher>)arg1;
- (void)updateNotificationRequest:(NCNotificationRequest *)arg1;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (void)updateNotificationSystemSettings:(NCNotificationSystemSettings *)arg1 previousSystemSettings:(NCNotificationSystemSettings *)arg2;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1;

@end
