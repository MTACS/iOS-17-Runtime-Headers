
@interface REMXPCDaemonControllerPerformerResolver_changeTracking : REMXPCDaemonControllerPerformerResolver {
    REMStoreContainerToken * _storeContainerToken;
}

@property (nonatomic, readonly) REMStoreContainerToken *storeContainerToken;

- (void).cxx_destruct;
- (id)initWithStoreContainerToken:(id)arg1;
- (id)name;
- (void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (id)storeContainerToken;

@end
