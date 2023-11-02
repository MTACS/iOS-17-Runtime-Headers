
@interface HDNotificationInstructionSyncSendEvent : NSObject <HKAnalyticsEvent> {
    HDNotificationInstructionMessage * _message;
    NSError * _sendError;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) bool isEventSubmissionIHAGated;

- (void).cxx_destruct;
- (id)eventName;
- (id)initWithNotificationInstructionMessage:(id)arg1 sendError:(id)arg2;
- (bool)isEventSubmissionIHAGated;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id*)arg2;

@end
