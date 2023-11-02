
@interface HUMosaicLayoutGeometry : NSObject {
    double  _cellSize;
    double  _cellSpacing;
    struct HUGridSize { 
        long long rowsDown; 
        long long columnsAcross; 
    }  _gridSize;
    bool  _isPortrait;
}

@property (nonatomic) double cellSize;
@property (nonatomic) double cellSpacing;
@property (nonatomic) struct HUGridSize { long long x1; long long x2; } gridSize;
@property (nonatomic) bool isPortrait;

- (double)cellSize;
- (double)cellSpacing;
- (id)description;
- (struct HUGridSize { long long x1; long long x2; })gridSize;
- (bool)isPortrait;
- (void)setCellSize:(double)arg1;
- (void)setCellSpacing:(double)arg1;
- (void)setGridSize:(struct HUGridSize { long long x1; long long x2; })arg1;
- (void)setIsPortrait:(bool)arg1;

@end
