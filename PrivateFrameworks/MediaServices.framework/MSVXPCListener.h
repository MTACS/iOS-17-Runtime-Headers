
@interface MSVXPCListener : NSXPCListener {
    NSXPCListener * _localProxy;
    NSString * _registeredServiceName;
}

- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1;
- (void)invalidate;
- (id)localProxy;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)suspend;

@end
