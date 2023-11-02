
@interface GKMappedIndexPath : NSIndexPath {
    NSIndexPath * _sourceIndexPath;
    id  _tag;
}

@property (nonatomic, copy) NSIndexPath *sourceIndexPath;
@property (nonatomic, retain) id tag;

+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2 fromSourceIndexPath:(id)arg3 withTag:(id)arg4;

- (void).cxx_destruct;
- (id)description;
- (void)setSourceIndexPath:(id)arg1;
- (void)setTag:(id)arg1;
- (id)sourceIndexPath;
- (id)tag;

@end
