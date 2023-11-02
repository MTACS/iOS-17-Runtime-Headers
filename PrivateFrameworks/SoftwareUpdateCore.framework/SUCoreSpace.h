
@interface SUCoreSpace : NSObject {
    NSObject<OS_dispatch_queue> * _spaceQueue;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *spaceQueue;

+ (bool)_isUserVolume:(id)arg1;
+ (void)_issueAppOffloadPurgeCompetion:(id /* block */)arg1 withCompletionQueue:(id)arg2 result:(bool)arg3 spacePurged:(long long)arg4 error:(id)arg5 releasingTransaction:(id)arg6;
+ (void)_issueSpaceCheckCompletion:(id /* block */)arg1 withCompletionQueue:(id)arg2 haveEnoughSpace:(bool)arg3 haveTotalRequired:(bool)arg4 freeSpaceAvailable:(unsigned long long)arg5 error:(id)arg6 releasingTransaction:(id)arg7;
+ (void)_issueSpacePurgeableCompetion:(id /* block */)arg1 withCompletionQueue:(id)arg2 result:(bool)arg3 spacePurgeable:(long long)arg4 error:(id)arg5 releasingTransaction:(id)arg6;
+ (void)_spaceCheckPhaseError:(id)arg1 checkingFromBase:(id)arg2 withIdentier:(id)arg3 completion:(id /* block */)arg4;
+ (void)_trackSpaceBegin:(id)arg1;
+ (void)_trackSpaceBegin:(id)arg1 withIdentifier:(id)arg2;
+ (void)_trackSpaceEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
+ (void)_trackSpaceEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3;
+ (void)cacheDeletePurge:(unsigned long long)arg1 cacheDeleteUrgency:(int)arg2 withCompletionQueue:(id)arg3 completion:(id /* block */)arg4;
+ (void)cacheDeletePurge:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(int)arg3 completion:(id /* block */)arg4;
+ (void)cacheDeletePurge:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(int)arg3 timeout:(int)arg4 withCompletionQueue:(id)arg5 completion:(id /* block */)arg6;
+ (void)cacheDeletePurge:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(int)arg3 withCompletionQueue:(id)arg4 completion:(id /* block */)arg5;
+ (id)cacheDeleteUrgencyName:(int)arg1;
+ (void)checkAvailableFreeSpace:(unsigned long long)arg1 checkingFromBase:(id)arg2 withIdentifier:(id)arg3 userInitiated:(bool)arg4 completion:(id /* block */)arg5;
+ (void)checkAvailableSpace:(unsigned long long)arg1 allowPurgeWithUrgency:(int)arg2 purgingFromBase:(id)arg3 minimalRequiredFreeSpace:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (void)checkAvailableSpace:(unsigned long long)arg1 allowPurgeWithUrgency:(int)arg2 purgingFromBase:(id)arg3 minimalRequiredFreeSpace:(unsigned long long)arg4 withCompletionQueue:(id)arg5 completion:(id /* block */)arg6;
+ (void)checkPurgeableSpaceCacheDelete:(unsigned long long)arg1 cacheDeleteUrgency:(int)arg2 withCompletionQueue:(id)arg3 completion:(id /* block */)arg4;
+ (void)checkPurgeableSpaceCacheDelete:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(int)arg3 timeout:(int)arg4 withCompletionQueue:(id)arg5 completion:(id /* block */)arg6;
+ (void)checkPurgeableSpaceCacheDelete:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(int)arg3 withCompletionQueue:(id)arg4 completion:(id /* block */)arg5;
+ (void)checkPurgeableSpaceOffloadApps:(unsigned long long)arg1 cacheDeleteUrgency:(long long)arg2 withCompletionQueue:(id)arg3 completion:(id /* block */)arg4;
+ (void)checkPurgeableSpaceOffloadApps:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(long long)arg3 withCompletionQueue:(id)arg4 completion:(id /* block */)arg5;
+ (void)offloadAppsPurge:(unsigned long long)arg1 cacheDeleteUrgency:(long long)arg2 withCompletionQueue:(id)arg3 completion:(id /* block */)arg4;
+ (void)offloadAppsPurge:(unsigned long long)arg1 fromBasePath:(id)arg2 cacheDeleteUrgency:(long long)arg3 withCompletionQueue:(id)arg4 completion:(id /* block */)arg5;
+ (id)sharedSpaceManager;

- (void).cxx_destruct;
- (id)init;
- (id)spaceQueue;

@end
