
@interface SUCorePurge : NSObject

+ (void)_trackPurgeBegin:(id)arg1;
+ (void)_trackPurgeBegin:(id)arg1 withIdentifier:(id)arg2;
+ (void)_trackPurgeEnd:(id)arg1;
+ (void)_trackPurgeEnd:(id)arg1 withIdentifier:(id)arg2;
+ (void)_trackPurgeEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
+ (void)_trackPurgeEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3;
+ (void)checkForAssetsOfType:(id)arg1 completion:(id /* block */)arg2;
+ (void)checkForAssetsOfType:(id)arg1 withCompletionQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)checkForExistingAssetsWithPolicy:(id)arg1 completion:(id /* block */)arg2;
+ (void)checkForExistingAssetsWithPolicy:(id)arg1 withCompletionQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)checkForExistingPrepare:(id /* block */)arg1;
+ (void)checkForExistingPrepareWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
+ (void)previousUpdateState:(bool*)arg1 tetheredRestore:(bool*)arg2 failedBackward:(bool*)arg3 failedForward:(bool*)arg4;
+ (void)removeAllAssetsOfType:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeAllAssetsOfType:(id)arg1 withCompletionQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)removeAllAssetsOfTypes:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeAllAssetsOfTypes:(id)arg1 withCompletionQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)removeAllUpdateContent:(id /* block */)arg1;
+ (void)removeAllUpdateContentWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeAllUpdateContentWithPolicy:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeAllUpdateContentWithPolicy:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;

@end
