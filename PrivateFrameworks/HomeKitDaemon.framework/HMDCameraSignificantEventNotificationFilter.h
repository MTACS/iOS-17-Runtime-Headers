
@interface HMDCameraSignificantEventNotificationFilter : HMFObject {
    NSMutableDictionary * _cloudSignificantEventsByUUID;
    NSMutableDictionary * _primaryResidentSignificantEventNotificationsByUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *cloudSignificantEventsByUUID;
@property (nonatomic, readonly) NSMutableDictionary *primaryResidentSignificantEventNotificationsByUUID;

+ (bool)isRelevantSignificantEventDate:(id)arg1;

- (void).cxx_destruct;
- (bool)_isSignificantEventRelevantWithUUID:(id)arg1 isFromPrimary:(bool)arg2;
- (void)_pruneCloudSignificantEvents;
- (void)_prunePrimaryResidentSignificantEvents;
- (void)addIncomingCloudSignificantEvent:(id)arg1;
- (void)addIncomingPrimaryResidentSignificantEventNotificationWithUUID:(id)arg1 notificationReasons:(unsigned long long)arg2 date:(id)arg3;
- (id)cloudSignificantEventsByUUID;
- (id)consumeCloudSignificantEventWithUUID:(id)arg1;
- (id)consumePrimaryResidentSignificantEventWithUUID:(id)arg1;
- (id)init;
- (id)primaryResidentSignificantEventNotificationsByUUID;

@end
