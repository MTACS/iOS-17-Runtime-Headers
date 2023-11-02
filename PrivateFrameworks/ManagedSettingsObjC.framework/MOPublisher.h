
@interface MOPublisher : NSObject

- (id)initPublisher;
- (id)sinkWithCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)sinkWithReceiveInput:(id /* block */)arg1;
- (id)sinkWithRecieveInput:(id /* block */)arg1;
- (void)subscribe:(id)arg1;

@end
