
@interface EspressoDataFrameStorageExecutor : NSObject

- (void)executeDataFrameStorage:(id)arg1 withNetwork:(struct { void *x1; int x2; })arg2 block:(id /* block */)arg3;
- (void)executeDataFrameStorage:(id)arg1 withNetwork:(struct { void *x1; int x2; })arg2 block:(id /* block */)arg3 blockPrepareForIndex:(id /* block */)arg4;
- (void)executeDataFrameStorage:(id)arg1 withNetwork:(struct { void *x1; int x2; })arg2 referenceNetwork:(struct { void *x1; int x2; })arg3 block:(id /* block */)arg4 blockPrepareForIndex:(id /* block */)arg5;

@end
