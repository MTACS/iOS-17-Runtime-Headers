
@interface NGMReplayManager : NSObject {
    NSPersistentContainer * _persistentContainer;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)computeDestinationHashForIncomingMessageFrom:(id)arg1 toLocalKey:(id)arg2;
- (id)computeDestinationHashForOutgoingMessageTo:(id)arg1 withLocalKey:(id)arg2;
- (unsigned int)counterForDestinationWithIdentityKey:(id)arg1 sendingIdentity:(id)arg2 error:(id*)arg3 success:(bool*)arg4;
- (id)dbNameFromProcess;
- (bool)deleteExpiredSendingDestinations;
- (bool)deleteReceivingCountersForKey:(id)arg1;
- (bool)isBATS;
- (bool)isRunningTests;
- (bool)isXCTest;
- (void)logDatabaseCreationDate:(id)arg1;
- (id)objectContextWithError:(id*)arg1;
- (id)persistentContainerWithError:(id*)arg1;
- (id)persistentStoreDescription;
- (bool)processFetchRequestAndValidate:(id)arg1 counter:(unsigned int)arg2 commit:(bool)arg3 theirIdentity:(id)arg4 prekey:(id)arg5 error:(id*)arg6;
- (id)registeredPrekeyForNGMPrekey:(id)arg1 objectContext:(id)arg2;
- (id /* block */)validateIncomingCounter:(unsigned int)arg1 prekey:(id)arg2 publicIdentity:(id)arg3 error:(id*)arg4;

@end
