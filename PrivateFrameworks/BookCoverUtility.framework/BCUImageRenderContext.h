
@interface BCUImageRenderContext : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    BCUCoverEffects * _coverEffects;
    NSHashTable * _filterOperations;
    BCULayerRenderer * _renderer;
}

@property (nonatomic, readonly) BCUCoverEffects *coverEffects;
@property (nonatomic, retain) NSHashTable *filterOperations;
@property (nonatomic, readonly) BCULayerRenderer *renderer;

- (void).cxx_destruct;
- (id)coverEffects;
- (id)filterOperations;
- (void)filteredImageFromImage:(struct CGImage { }*)arg1 filterInfo:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 completion:(id /* block */)arg5;
- (void)filteredImageFromImage:(struct CGImage { }*)arg1 filterInfo:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 waitForCPUSynchronization:(bool)arg5 logKey:(id)arg6 completion:(id /* block */)arg7;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (id)renderer;
- (void)setFilterOperations:(id)arg1;

@end
