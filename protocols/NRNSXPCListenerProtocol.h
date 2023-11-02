
@protocol NRNSXPCListenerProtocol <NSObject>

@required

- (<NRNSXPCListenerDelegate> *)delegate;
- (<NRNSXPCListenerProtocol> *)initWithMachServiceName:(NSString *)arg1;
- (void)invalidate;
- (void)resume;
- (void)setDelegate:(id <NRNSXPCListenerDelegate>)arg1;
- (void)suspend;

@end
