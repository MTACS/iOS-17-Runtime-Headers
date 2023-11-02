
@interface CALNTriggeredEventNotificationResponseDataPayloadMapper : NSObject

+ (id)_hypothesisDataForNotificationData:(id)arg1;
+ (id)_hypothesisFromPayload:(id)arg1;
+ (id)_lastFireTimeOfAlertOffsetFromTravelTimeFromPayload:(id)arg1;
+ (void)_setHypothesisDataFromNotificationData:(id)arg1 inPayload:(id)arg2;
+ (void)_setLastFireTimeOfAlertOffsetFromTravelTimeFromNotificationData:(id)arg1 inPayload:(id)arg2;
+ (id)notificationResponseDataForPayload:(id)arg1;
+ (id)payloadForNotificationResponseData:(id)arg1;

@end
