
@interface PXPhotosGridMessagesLayoutSpec : PXFeatureSpec {
    struct CGSize { 
        double width; 
        double height; 
    }  _interItemSpacing;
    double  _itemCornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemInternalMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemInternalSquareMargin;
    unsigned long long  _numberOfColumns;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } interItemSpacing;
@property (nonatomic, readonly) double itemCornerRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } itemInternalMargin;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } itemInternalSquareMargin;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (double)itemCornerRadius;
- (struct CGSize { double x1; double x2; })itemInternalMargin;
- (struct CGSize { double x1; double x2; })itemInternalSquareMargin;
- (unsigned long long)numberOfColumns;
- (long long)numberOfColumnsForNumberOfItems:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;

@end
