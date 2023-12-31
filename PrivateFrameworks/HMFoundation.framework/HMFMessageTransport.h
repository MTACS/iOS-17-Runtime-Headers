
@interface HMFMessageTransport : HMFObject {
    <HMFMessageTransportDelegate> * _delegate;
}

@property <HMFMessageTransportDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
