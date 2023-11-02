
@interface PHAMusicCacheMusicKitConsistencyJob : NSObject <PHAMusicJob> {
    NSObject<OS_dispatch_queue> * _runQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double periodicity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (double)periodicity;
- (void)runWithGraphManager:(id)arg1 progressBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (bool)shouldRunForLibrary:(id)arg1;

@end
