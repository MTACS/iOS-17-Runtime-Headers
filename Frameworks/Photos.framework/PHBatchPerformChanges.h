
@interface PHBatchPerformChanges : NSObject {
    id /* block */  _batchBlock;
    unsigned long long  _batchSize;
    unsigned long long  _itemCount;
    PHPhotoLibrary * _library;
}

- (void).cxx_destruct;
- (bool)_addBatchRangeAtIndex:(unsigned long long)arg1 toOutError:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_batchRangeAtIndex:(unsigned long long)arg1;
- (id)_errorByAddingBatchRangeAtIndex:(unsigned long long)arg1 tofError:(id)arg2;
- (bool)_hasMoreBatchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)_performBatchAtIndex:(unsigned long long)arg1;
- (unsigned long long)_performBatchAtIndexAndWait:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_performChangesAndWaitStartingAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (void)_performChangesStartingAtIndex:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_performNextBatchAtIndex:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithPhotoLibrary:(id)arg1 itemCount:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 batchBlock:(id /* block */)arg4;
- (bool)performChangesAndWait:(id*)arg1;
- (void)performChangesWithCompletionHandler:(id /* block */)arg1;

@end
