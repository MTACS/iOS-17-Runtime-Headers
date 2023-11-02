
@interface SMEligibilityChecker : NSObject <IDSIDQueryControllerDelegate> {
    IDSService * _iCloudIDSService;
    IMAccountController * _iMAccountController;
    IDSIDQueryController * _idsIDQueryController;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *iCloudIDSService;
@property (nonatomic, retain) IMAccountController *iMAccountController;
@property (nonatomic, retain) IDSIDQueryController *idsIDQueryController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)convertEligibilityTypeToString:(long long)arg1;
+ (id)convertToPushTokenMap:(id)arg1;

- (void).cxx_destruct;
- (void)addDelegateForService:(id)arg1;
- (void)checkReceiverEligibility:(id)arg1 handler:(id /* block */)arg2;
- (bool)checkRecipientAccountIsUnique:(id)arg1;
- (id)iCloudIDSService;
- (id)iMAccountController;
- (id)idsIDQueryController;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 IDSIDQueryController:(id)arg2 IMAccountController:(id)arg3 iCloudIDSService:(id)arg4;
- (id)queue;
- (long long)reportedEligibilityWithiMessageEligibility:(long long)arg1 iCloudEligibility:(long long)arg2;
- (void)resolveEndpointsForDestinations:(id)arg1 service:(id)arg2 requiredCapabilities:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setICloudIDSService:(id)arg1;
- (void)setIMAccountController:(id)arg1;
- (void)setIdsIDQueryController:(id)arg1;
- (void)setQueue:(id)arg1;

@end
