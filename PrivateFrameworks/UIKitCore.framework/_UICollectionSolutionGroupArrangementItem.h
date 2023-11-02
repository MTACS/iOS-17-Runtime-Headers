
@interface _UICollectionSolutionGroupArrangementItem : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutFrame;
    _UICollectionLayoutItemSolver * _solution;
}

- (void).cxx_destruct;

@end
