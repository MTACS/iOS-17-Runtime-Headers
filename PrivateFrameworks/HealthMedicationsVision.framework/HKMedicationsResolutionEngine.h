
@interface HKMedicationsResolutionEngine : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    HKMedicationsResolver * _resolver;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HKMedicationsResolver *resolver;

+ (bool)isVisionAssetAvailable;

- (void).cxx_destruct;
- (void)filter:(id)arg1 transcripts:(id)arg2 criterion:(float)arg3 limit:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)hkctl_resolveMedicationsUsing:(id)arg1 resultLimit:(long long)arg2 error:(inout id*)arg3;
- (id)init;
- (id)initWithAssetUrl:(id)arg1;
- (id)queue;
- (void)resetResolverWithCompletionHandler:(id /* block */)arg1;
- (void)resolveMedicationsUsing:(id)arg1 resultLimit:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)resolver;
- (void)setQueue:(id)arg1;
- (void)setResolver:(id)arg1;

@end
