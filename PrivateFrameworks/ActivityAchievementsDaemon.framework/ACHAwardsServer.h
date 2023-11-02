
@interface ACHAwardsServer : HDStandardTaskServer <ACHAwardsServerInterface> {
    NSCalendar * _gregorianCalendar;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCalendar *gregorianCalendar;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)_transactionContextForReadingProtectedDataWithIdentifier:(id)arg1;
- (id)_transactionContextForWritingProtectedDataWithIdentifier:(id)arg1;
- (id)exportedInterface;
- (id)gregorianCalendar;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)protectedDataAvailableWithCompletion:(id /* block */)arg1;
- (id)queue;
- (id)remoteInterface;
- (void)remote_addEarnedInstances:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addEarnedInstances:(id)arg1 removingEarnedInstances:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_addOrUpdateTemplates:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addTemplates:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_addTemplates:(id)arg1 removingTemplates:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_countOfEarnedInstancesForTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_countOfEarnedInstancesForUniqueNames:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchEarnedInstancesForEarnedDateComponentsString:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchEarnedInstancesForTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchMostRecentEarnedInstanceForTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchMostRecentEarnedInstancesForTemplateUniqueNames:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)remote_removeAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)remote_removeEarnedInstances:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeEarnedInstancesForTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_removeTemplates:(id)arg1 completion:(id /* block */)arg2;
- (void)setGregorianCalendar:(id)arg1;
- (void)setQueue:(id)arg1;

@end
