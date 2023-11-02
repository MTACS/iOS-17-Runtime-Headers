
@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction {
    BCCloudKitController * _cloudKitController;
}

@property (nonatomic) BCCloudKitController *cloudKitController;

+ (id)transactionNameForEntityName:(id)arg1;

- (void).cxx_destruct;
- (id)cloudKitController;
- (double)coalescingDelay;
- (id)initWithCloudKitController:(id)arg1 delegate:(id)arg2;
- (void)performWorkWithCompletion:(id /* block */)arg1;
- (void)setCloudKitController:(id)arg1;
- (double)transactionLifetimeTimout;

@end
