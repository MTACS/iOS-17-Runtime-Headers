
@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol> {
    <NRNSXPCListenerDelegate> * _delegate;
    bool  _invalidated;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NRNSXPCListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithMachServiceName:(id)arg1;
- (void)invalidate;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)suspend;

@end
