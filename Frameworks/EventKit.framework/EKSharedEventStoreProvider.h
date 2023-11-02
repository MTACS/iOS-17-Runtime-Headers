
@interface EKSharedEventStoreProvider : NSObject <EKEventStoreProvider> {
    EKEventStore * _sharedEventStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EKEventStore *sharedEventStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventStore;
- (id)initWithEventStore:(id)arg1;
- (id)sharedEventStore;

@end
