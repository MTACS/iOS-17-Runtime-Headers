
@interface CATIDSServiceConnectionMessageProcessor : NSObject {
    <CATIDSServiceConnectionMessageProcessorDelegate> * _delegate;
    NSUUID * mConnectionIdentifier;
    NSObject<OS_dispatch_queue> * mWorkQueue;
}

@property (nonatomic) <CATIDSServiceConnectionMessageProcessorDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithWorkQueue:(id)arg1 connectionIdentifier:(id)arg2;
- (void)receiveMessage:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
