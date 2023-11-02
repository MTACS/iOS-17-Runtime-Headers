
@interface TURTCCallReporter : NSObject {
    TUCallCenter * _callCenter;
    NSMutableDictionary * _callUUIDToConversation;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) TUCallCenter *callCenter;
@property (nonatomic, readonly) NSMutableDictionary *callUUIDToConversation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)callCenter;
- (void)callStatusChangedNotification:(id)arg1;
- (id)callUUIDToConversation;
- (id)clientName:(id)arg1;
- (id)initWithCallCenter:(id)arg1;
- (id)queue;
- (void)report:(id)arg1 withConversation:(id)arg2;
- (id)reportingSessionForCall:(id)arg1 withConversation:(id)arg2;
- (id)rtcCallInfoDictionary:(id)arg1 withConversation:(id)arg2;
- (id)serviceName:(id)arg1 withConversation:(id)arg2;

@end
