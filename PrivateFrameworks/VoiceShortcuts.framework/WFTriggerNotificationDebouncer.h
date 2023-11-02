
@interface WFTriggerNotificationDebouncer : NSObject {
    <WFTriggerNotificationDebouncerDelegate> * _delegate;
    NSMutableDictionary * _notificationItemTable;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <WFTriggerNotificationDebouncerDelegate> *delegate;
@property (nonatomic, readonly) NSMutableDictionary *notificationItemTable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)addEventsWithIdentifiers:(id)arg1 configuredTrigger:(id)arg2 workflowReference:(id)arg3;
- (void)debouncerDidFire:(id)arg1;
- (id)delegate;
- (id)init;
- (id)notificationItemTable;
- (id)queue;
- (void)setDelegate:(id)arg1;

@end
