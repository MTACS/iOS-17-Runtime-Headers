
@interface _UIUpdateVisibleCellsContext : NSObject {
    NSMutableArray * _attributes;
    NSMutableArray * _indexPaths;
    NSMutableIndexSet * _sectionIndexes;
    NSMutableArray * _sizes;
    long long  _visibleCellsRefCount;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
