
@interface GLKShadingHash : NSObject {
    NSMutableDictionary * _compiledFshs;
    NSMutableDictionary * _compiledVshs;
    NSObject<OS_dispatch_queue> * _fshQueue;
    NSObject<OS_dispatch_queue> * _vshQueue;
}

- (id)compiledFshForKey:(id)arg1;
- (id)compiledVshForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)purgeAllShaders;
- (void)setCompiledFsh:(id)arg1 forKey:(id)arg2;
- (void)setCompiledVsh:(id)arg1 forKey:(id)arg2;

@end
