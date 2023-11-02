
@interface _UICollectionEstimatedSolutionBookmark : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _itemRange;
    _UICollectionLayoutItemSolver * _solution;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _solutionFrame;
    <_UICollectionLayoutAuxillaryOffsets> * _supplementaryOffsets;
}

- (void).cxx_destruct;
- (id)description;

@end
