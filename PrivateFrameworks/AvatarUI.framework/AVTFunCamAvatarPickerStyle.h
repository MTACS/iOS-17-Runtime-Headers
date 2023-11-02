
@interface AVTFunCamAvatarPickerStyle : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _engagedCellSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gridEdgeInsets;
    double  _interitemSpacing;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic) struct CGSize { double x1; double x2; } engagedCellSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } gridEdgeInsets;
@property (nonatomic) double interitemSpacing;

+ (id)defaultLayoutStyle;
+ (id /* block */)insetProviderForConstant:(double)arg1;

- (struct CGSize { double x1; double x2; })cellSize;
- (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
- (struct CGSize { double x1; double x2; })engagedCellSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })gridEdgeInsets;
- (id /* block */)imageItemInsetsForGrid;
- (id /* block */)imageItemInsetsForList;
- (id)initWithCellSize:(struct CGSize { double x1; double x2; })arg1 engagedCellSize:(struct CGSize { double x1; double x2; })arg2 interitemSpacing:(double)arg3 gridEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (double)interitemSpacing;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEngagedCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGridEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInteritemSpacing:(double)arg1;

@end
