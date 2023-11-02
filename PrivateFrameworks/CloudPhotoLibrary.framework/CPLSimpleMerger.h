
@interface CPLSimpleMerger : NSObject {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (id)initWithMergeBlock:(id /* block */)arg1;
- (bool)mergeConflictsWithError:(id*)arg1;

@end
