
@interface DockKitCore.DeviceNotification : NSObject {
    void _state;
    void allocatedLock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void name;
    void token;
}

@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
