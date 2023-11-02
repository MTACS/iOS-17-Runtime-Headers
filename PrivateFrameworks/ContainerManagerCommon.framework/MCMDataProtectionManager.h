
@interface MCMDataProtectionManager : NSObject {
    NSObject<OS_dispatch_queue> * _protectionOperationFileQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *protectionOperationFileQueue;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_startDataProtectionChangeOperation:(id)arg1 withCompletion:(id /* block */)arg2;
- (int)desiredDataProtectionClassForMetadata:(id)arg1 clientIdentity:(id)arg2;
- (id)init;
- (int)intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1 clientIdentity:(id)arg2 containerClass:(unsigned long long)arg3 info:(id)arg4;
- (id)protectionOperationFileQueue;
- (bool)restartPendingDataProtectionOperationsWithError:(id*)arg1;
- (void)setDataProtectionOnDataContainerForMetadata:(id)arg1 isSecondOrThirdPartyApp:(bool)arg2 retryIfLocked:(bool)arg3 deferUntilNextLaunch:(bool)arg4 withCompletion:(id /* block */)arg5;

@end
