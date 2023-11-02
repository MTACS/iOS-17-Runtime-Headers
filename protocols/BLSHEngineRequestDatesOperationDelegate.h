
@protocol BLSHEngineRequestDatesOperationDelegate <NSObject>

@required

- (void)requestDatesOperation:(BLSHEngineRequestDatesOperation *)arg1 didTimeoutPendingEnvironments:(NSArray *)arg2;
- (void)requestDatesOperation:(BLSHEngineRequestDatesOperation *)arg1 environment:(id <BLSHBacklightSceneHostEnvironment>)arg2 didProvideSpecifiers:(NSArray *)arg3 forPresentationInterval:(NSDateInterval *)arg4 isComplete:(bool)arg5;

@end
