
@interface HDMHPromptedAssessmentsManagerServer : HDStandardTaskServer <HDMHPromptedAssessmentsManagerObserver, HKMHPromptedAssessmentsManagerServer> {
    HDMHPromptedAssessmentsManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)promptedAssessmentsManagerDidUpdatePromptedAssessments:(id)arg1;
- (id)remoteInterface;
- (void)remote_getPromptedAssessmentsWithCompletion:(id /* block */)arg1;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)arg1;
- (void)remote_stopObservingChanges;

@end
