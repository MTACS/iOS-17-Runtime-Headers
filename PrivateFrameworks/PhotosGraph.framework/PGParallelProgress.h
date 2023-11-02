
@interface PGParallelProgress : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _progressBlock;
    MAMutableFloatVector * _progressValues;
}

- (void).cxx_destruct;
- (id)initWithParallelOperationCount:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id /* block */)progressBlockForParallelOperationWithIndex:(unsigned long long)arg1;

@end
