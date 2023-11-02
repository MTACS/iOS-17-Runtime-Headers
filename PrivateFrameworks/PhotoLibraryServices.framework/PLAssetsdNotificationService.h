
@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService <PLAssetsdNotificationServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (void)noteInterestingMemoryAlertViewedWithUUID:(id)arg1;
- (void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
- (void)notePhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)arg1;
- (void)notePhotosChallengeSubmissionWithNotificationDeliveryDate:(id)arg1;
- (void)noteReadyToViewMomentShareWithUUID:(id)arg1;
- (void)noteSharedLibrarySuggestionsWithNotificationDeliveryDate:(id)arg1;
- (void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg1;
- (void)noteSuggestedCMMAlertWithCMMUUID:(id)arg1 notificationDeliveryDate:(id)arg2;
- (void)notifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)notifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 acceptInvitation:(bool)arg2;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;

@end
