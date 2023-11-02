
@interface HMDLastEventStoreController : NSObject <HMFLogging> {
    HMELastEventStore * _eventStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMELastEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didRemoveAccessory:(id)arg1;
- (void)didRemoveHome:(id)arg1;
- (void)didRemoveMediaSystem:(id)arg1;
- (id)eventStore;
- (id)initWithWithEventStore:(id)arg1;

@end
