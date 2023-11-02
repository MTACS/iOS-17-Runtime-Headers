
@interface MPSGraphBlock : MPSGraphObject {
    NSMutableArray * _blockOperations;
    void * _mlirBlock;
    MPSGraphRegion * _parentRegion;
    MPSGraphOperation * _terminator;
}

- (void).cxx_destruct;
- (void)addTerminatorOperation:(id)arg1;
- (id)init;
- (id)parentOp;

@end
