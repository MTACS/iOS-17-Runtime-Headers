
@interface HDWorkoutControlServer : HDStandardTaskServer <HKWorkoutControlServer> {
    HDWorkoutManager * _workoutManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_finishAllWorkoutsWithCompletion:(id /* block */)arg1;
- (void)remote_generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(id /* block */)arg3;
- (void)remote_generatePauseOrResumeRequestAllowingBackgroundRuntime:(bool)arg1 completion:(id /* block */)arg2;

@end
