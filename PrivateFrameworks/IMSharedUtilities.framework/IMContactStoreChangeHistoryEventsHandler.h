
@interface IMContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor> {
    bool  _receivedDropEverythingEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool receivedDropEverythingEvent;
@property (readonly) Class superclass;

- (void)postNotificationForCNContact:(id)arg1 eventType:(unsigned long long)arg2 handleIDsToProcess:(id)arg3;
- (void)processChangeEventForContact:(id)arg1 contactFromCache:(id)arg2 eventType:(unsigned long long)arg3 handleID:(id)arg4;
- (void)processContactChangeEventForContact:(id)arg1 ofEventType:(unsigned long long)arg2;
- (bool)receivedDropEverythingEvent;
- (void)setReceivedDropEverythingEvent:(bool)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
