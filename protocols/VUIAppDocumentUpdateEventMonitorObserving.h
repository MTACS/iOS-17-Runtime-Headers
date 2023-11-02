
@protocol VUIAppDocumentUpdateEventMonitorObserving <NSObject>

@required

- (void)appDocumentDidReceiveEvent:(VUIAppDocumentUpdateEvent *)arg1;
- (void)appDocumentHasBecomeActive;

@end
