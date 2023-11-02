
@interface HAP2AccessoryServerTransportBaseWithDelegate : HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransport> {
    <HAP2AccessoryServerTransportDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2AccessoryServerTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxRequestTimeout;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HAP2AccessoryServerTransportCommon> *underlyingTransport;

- (void).cxx_destruct;
- (id)delegate;
- (void)didChangeStateWithError:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
