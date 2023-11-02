
@interface SFFluidTabOverviewGridLayoutSectionInfo : NSObject {
    double  _headerHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _itemSpacing;
    unsigned long long  _numberOfColumns;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sectionRect;
}

@property (nonatomic) double headerHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } itemSpacing;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sectionRect;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(unsigned long long)arg1;
- (double)headerHeight;
- (struct CGSize { double x1; double x2; })itemSize;
- (struct CGPoint { double x1; double x2; })itemSpacing;
- (unsigned long long)numberOfColumns;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sectionRect;
- (void)setHeaderHeight:(double)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSpacing:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
