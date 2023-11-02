
@interface RBSWorkloop : NSObject {
    NSObject<OS_dispatch_workloop> * _backgroundWorkloop;
    NSObject<OS_dispatch_workloop> * _calloutWorkloop;
    NSObject<OS_dispatch_workloop> * _syncingWorkloop;
}

+ (id)createBackgroundQueue:(id)arg1;
+ (id)createSyncingQueue:(id)arg1;
+ (void)performBackgroundWork:(id /* block */)arg1;
+ (void)performBackgroundWorkWithServiceClass:(unsigned int)arg1 block:(id /* block */)arg2;
+ (id)sharedBackgroundWorkloop;
+ (id)sharedSyncingWorkloop;

- (void).cxx_destruct;

@end
