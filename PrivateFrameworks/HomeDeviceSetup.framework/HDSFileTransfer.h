
@interface HDSFileTransfer : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)destDirectoryForTargetId:(id)arg1;
+ (id)tmpRapportDir;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)sideloadFilesForTargetId:(id)arg1 pathToDirectory:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)waitForFilesWithTargetId:(id)arg1 withCompletion:(id /* block */)arg2;

@end
