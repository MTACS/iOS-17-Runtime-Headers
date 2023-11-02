
@interface DRSClientConnectionState : NSObject {
    bool  _hasAdminEntitlement;
    int  _pid;
}

@property (nonatomic, readonly) bool hasAdminEntitlement;
@property (nonatomic, readonly) int pid;

- (void)dealloc;
- (bool)hasAdminEntitlement;
- (id)initWithConnection:(id)arg1 service:(id)arg2;
- (int)pid;

@end
