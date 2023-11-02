
@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {
    _UIDataSourceSnapshotter * _finalDataSourceSnapshot;
    NSArray * _updateItems;
    <_UICollectionViewUpdateTranslating> * _updateTranslator;
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

@end
