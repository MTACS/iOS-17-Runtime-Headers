
@interface ABSAddressBookSettings : NSObject {
    CNFuture * _contactStoreFuture;
    NSDictionary * _options;
    int  _policy;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) CNFuture *contactStoreFuture;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) int policy;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;

- (void).cxx_destruct;
- (id)contactStoreFuture;
- (id)init;
- (id)initWithContactStoreFuture:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 policy:(int)arg2;
- (id)initWithOptions:(id)arg1 policy:(int)arg2 contactStoreFuture:(id)arg3 schedulerProvider:(id)arg4;
- (id)newFaultHandlerWithStorage:(id)arg1;
- (id)options;
- (int)policy;
- (id)schedulerProvider;

@end
