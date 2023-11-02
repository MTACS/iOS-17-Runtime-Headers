
@interface _UICollectionLayoutSolveParameters : NSObject <NSCopying> {
    NSMutableDictionary * _invalidatedAuxillaryDict;
    NSMutableIndexSet * _invalidatedIndexes;
    bool  _isFullResolve;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
