
@interface TUScreenTimeDataSource : NSObject <TUScreenTimeStateDataSource> {
    STManagementState * _screenTimeManagementState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STManagementState *screenTimeManagementState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)screenTimeManagementState;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)arg1;

@end
