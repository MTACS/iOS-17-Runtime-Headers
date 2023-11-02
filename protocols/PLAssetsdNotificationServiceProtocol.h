
@protocol PLAssetsdNotificationServiceProtocol <NSObject>

@required

- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(NSArray *)arg1 thumbnailImageData:(NSData *)arg2 notificationTitle:(NSString *)arg3 notificationSubtitle:(NSString *)arg4;
- (void)noteInterestingMemoryAlertViewedWithUUID:(NSString *)arg1;
- (void)noteInterestingMemoryAlertWithMemoryUUID:(NSString *)arg1 notificationDeliveryDate:(NSDate *)arg2;
- (void)notePhotosChallengeNewQuestionsWithNotificationDeliveryDate:(NSDate *)arg1;
- (void)notePhotosChallengeSubmissionWithNotificationDeliveryDate:(NSDate *)arg1;
- (void)noteReadyToViewMomentShareWithUUID:(NSString *)arg1;
- (void)noteSharedLibrarySuggestionsWithNotificationDeliveryDate:(NSDate *)arg1;
- (void)noteSuggestedCMMAlertViewedWithCMMUUID:(NSString *)arg1;
- (void)noteSuggestedCMMAlertWithCMMUUID:(NSString *)arg1 notificationDeliveryDate:(NSDate *)arg2;
- (void)notifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)notifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(NSString *)arg1;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(NSString *)arg1 acceptInvitation:(bool)arg2;
- (void)userViewedNotificationWithAlbumCloudGUID:(NSString *)arg1;

@end
