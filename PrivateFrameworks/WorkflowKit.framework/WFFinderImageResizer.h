
@interface WFFinderImageResizer : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)computeResizedSizesForImages:(id)arg1 inSizes:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)queue;
- (id)resizeImages:(id)arg1 toSize:(id)arg2 completion:(id /* block */)arg3;
- (bool)unsafeComputeResizedSizesForImageContentItems:(id)arg1 inSizes:(id)arg2 intoSizesTable:(id)arg3 error:(id*)arg4;

@end
