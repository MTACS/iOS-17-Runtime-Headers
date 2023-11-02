
@interface ManagedAppDistribution.XPCClient : NSObject <ManagedAppDistribution.XPCClientProtocol> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  id;
    void lockedStorage;
}

- (void).cxx_destruct;
- (void)handleMessages:(id)arg1;
- (id)init;

@end
