
@interface SXEventStoreProvider : NSObject {
    EKEventStore * _eventStore;
}

@property (nonatomic, readonly) EKEventStore *eventStore;

- (void).cxx_destruct;
- (id)eventStore;

@end
