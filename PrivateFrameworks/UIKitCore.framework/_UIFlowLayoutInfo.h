
@interface _UIFlowLayoutInfo : NSObject {
    long long  _computedEstimatedCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _computedEstimatedSum;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _dimension;
    bool  _estimatesSizes;
    bool  _horizontal;
    bool  _isValid;
    UICollectionViewFlowLayout * _layout;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    bool  _leftToRight;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    }  _rowAlignmentOptions;
    NSMutableArray * _sections;
    bool  _useFloatingHeaderFooter;
    bool  _usesFloatingHeaderFooter;
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
- (id)copy;
- (id)init;

@end
