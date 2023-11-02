
@interface PHANotificationController : NSObject {
    PGManager * _graphManager;
    NSObject<OS_os_log> * _loggingConnection;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
}

- (void).cxx_destruct;
- (id)_userFeedbackCalculatorWithPhotoLibrary:(id)arg1;
- (id)bestDateForDeliveringNotification;
- (void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (void)fireNotificationForSuggestionIdentifiers:(id)arg1;
- (id)initWithGraphManager:(id)arg1;
- (id)initWithGraphManager:(id)arg1 userFeedbackCalculator:(id)arg2;
- (void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2 forceImmediateDelivery:(bool)arg3;
- (void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2;
- (bool)shouldFireNotificationForMemoriesWithScores:(id)arg1 withCreationReason:(unsigned long long)arg2;
- (bool)userFeedbackScoreIsAcceptableForAssetCollection:(id)arg1 memoryFeatures:(id)arg2 userFeedbackCalculator:(id)arg3;
- (bool)userIsActivelyUsingPhotos;

@end
