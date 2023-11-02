
@interface PXStoryPHMemoryPersistableRecipeProducer : NSObject <PXStoryPersistableRecipeProducer> {
    <PXDisplayAsset> * _keyAsset;
    PHMemory * _memory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <PXDisplayAsset> *keyAsset;
@property (nonatomic, readonly) PHMemory *memory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_persistableRecipeForMemory:(id)arg1 keyAsset:(id)arg2 miroDataUsed:(id*)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMemory:(id)arg1 keyAsset:(id)arg2;
- (id)keyAsset;
- (id)memory;
- (id)requestPersistableRecipeWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (id)workQueue;

@end
