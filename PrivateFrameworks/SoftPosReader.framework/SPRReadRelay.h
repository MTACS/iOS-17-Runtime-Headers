
@interface SPRReadRelay : NSObject <SPRReadDelegate> {
    <SPRReadDelegate> * _base;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) <SPRReadDelegate> *base;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)base;
- (id)initWithBase:(id)arg1 queue:(id)arg2;
- (void)onFailureWithError:(id)arg1;
- (void)onSuccessWithTransactionData:(id)arg1;
- (void)onUpdateWithEvent:(long long)arg1 mode:(long long)arg2;
- (id)queue;

@end
