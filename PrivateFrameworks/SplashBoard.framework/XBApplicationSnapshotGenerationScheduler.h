
@interface XBApplicationSnapshotGenerationScheduler : NSObject <XBApplicationSnapshotImageGenerationScheduling> {
    NSObject<OS_dispatch_workloop> * _dataGenerationWorkloop;
    NSObject<OS_dispatch_queue> * _imageGenerationQueue;
    NSObject<OS_dispatch_workloop> * _imageGenerationWorkloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)performImageDataGenerationAsync:(id /* block */)arg1 withHandler:(id /* block */)arg2;
- (void)performImageDataGenerationAsyncAndWait:(id /* block */)arg1 withHandler:(id /* block */)arg2;
- (void)performImageGenerationAsync:(id /* block */)arg1;
- (void)performImageGenerationAsyncAndWait:(id /* block */)arg1;

@end
