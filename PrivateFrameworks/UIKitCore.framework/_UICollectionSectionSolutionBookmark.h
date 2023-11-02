
@interface _UICollectionSectionSolutionBookmark : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _globalFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _globalPinningFrame;
    <_UIContentInsetsEnvironment> * _insetEnvironment;
    _UICollectionLayoutSectionDescriptor * _memoizedDescriptor;
    _UICollectionPreferredSizes * _preferredSizes;
    NSCollectionLayoutSection * _section;
    <_UICollectionLayoutSectionSolver> * _solution;
    <_UIContentInsetsEnvironment> * _supplementaryInsetEnvironment;
}

- (void).cxx_destruct;
- (id)description;

@end
