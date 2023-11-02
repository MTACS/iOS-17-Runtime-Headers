
@interface BMPublisherVirtualTableCursor : NSObject <BPSSubscriber> {
    BPSPublisher * _publisher;
    long long  _rowID;
    id  _rowObject;
    BPSSubscription * _subscription;
    BMStreamVirtualTable * _virtualTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BPSPublisher *publisher;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly) id rowObject;
@property (nonatomic, readonly) BPSSubscription *subscription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMStreamVirtualTable *virtualTable;

+ (id)new;

- (void).cxx_destruct;
- (void)_advance;
- (void)_resetWithPublisher:(id)arg1;
- (void)advance;
- (void)cancel;
- (void)close;
- (id)description;
- (id)init;
- (id)initWithVirtualTable:(id)arg1;
- (id)publisher;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)receivedEvent:(id)arg1;
- (void)requestNextEvents;
- (void)reset;
- (void)resetWithOptions:(id)arg1;
- (long long)rowID;
- (id)rowObject;
- (void)subscribeTo:(id)arg1;
- (id)subscription;
- (id)virtualTable;

@end
