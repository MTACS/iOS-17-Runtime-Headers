
@interface FigNSXPCConnection : NSXPCConnection {
    NSObject<OS_dispatch_group> * _connectionRunningGroup;
    bool  _explicitlyInvalidated;
}

@property (nonatomic, readonly) bool explicitlyInvalidated;

- (void)blockUntilInvalidateHandlerHasBeenCalled;
- (void)dealloc;
- (bool)explicitlyInvalidated;
- (void)invalidate;
- (void)resume;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
