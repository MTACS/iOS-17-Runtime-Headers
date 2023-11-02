
@interface PHASEVoxelTreeView : PHASEGeometryView {
    NSArray * _subtrees;
}

@property (nonatomic, readonly, copy) NSArray *subtrees;

- (void).cxx_destruct;
- (id)getLevelViewWithIndex:(unsigned long long)arg1 inLevelIndex:(unsigned long long)arg2;
- (id)init;
- (id)initWithEngine:(id)arg1 shapeHandle:(struct Handle64 { unsigned long long x1; })arg2 voxelTreeInfo:(const void*)arg3;
- (id)levelViewWithIndex:(unsigned long long)arg1 inLevelIndex:(unsigned long long)arg2;
- (id)subtrees;

@end
