
@interface _BMCancellableClientSubscriber : NSObject <BPSCancellable> {
    BMComputeXPCPublisherClient * _client;
    NSString * _identifier;
}

@property (nonatomic, retain) BMComputeXPCPublisherClient *client;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (void)cancel;
- (id)client;
- (id)identifier;
- (id)initWithClient:(id)arg1 identifier:(id)arg2;
- (void)setClient:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
