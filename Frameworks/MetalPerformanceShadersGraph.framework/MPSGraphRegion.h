
@interface MPSGraphRegion : MPSGraphObject {
    NSMutableArray * _blocks;
    MPSGraphOperation * _parentOp;
}

- (void).cxx_destruct;
- (id)appendNewBlock;
- (id)init;

@end
