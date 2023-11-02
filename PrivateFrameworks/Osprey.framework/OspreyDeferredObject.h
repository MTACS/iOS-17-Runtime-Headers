
@interface OspreyDeferredObject : NSObject {
    NSObject<OS_dispatch_queue> * _deferralQueue;
    NSObject<OS_dispatch_group> * _fulfillmentGroup;
    NSObject<OS_dispatch_queue> * _fulfillmentQueue;
    id  _promised;
}

- (void).cxx_destruct;
- (void)fulfill:(id)arg1;
- (void)fulfilledWithCompletion:(id /* block */)arg1;
- (id)initWithFulfillmentQueue:(id)arg1;

@end
