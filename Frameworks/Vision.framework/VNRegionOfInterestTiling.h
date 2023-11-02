
@interface VNRegionOfInterestTiling : NSObject {
    unsigned long long  _columnCount;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelOriginX;
    unsigned long long  _pixelOriginY;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pixelRegionOfInterest;
    unsigned long long  _pixelWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
    unsigned long long  _rowCount;
    NSArray * _tiles;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pixelBounds;
@property (readonly) unsigned long long pixelHeight;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pixelRegionOfInterest;
@property (readonly) unsigned long long pixelWidth;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (readonly) unsigned long long tileColumnsCount;
@property (readonly) unsigned long long tileCount;
@property (readonly) unsigned long long tileRowsCount;
@property (readonly, copy) NSArray *tiles;

+ (id)tilingForRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inPixelBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 tileAspectRatio:(double)arg3 options:(id)arg4;
+ (id)tilingForRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inPixelWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 tileAspectRatio:(double)arg4 options:(id)arg5;

- (void).cxx_destruct;
- (void)_calculateTilesHorizontally:(bool)arg1 vertically:(bool)arg2 tileAspectRatio:(double)arg3 overlapPercentage:(double)arg4 tileOverflowCount:(unsigned long long)arg5 addTileBlock:(id /* block */)arg6 columnCount:(unsigned long long*)arg7 rowCount:(unsigned long long*)arg8;
- (void)_calculateTilesWithAspectRatio:(double)arg1 options:(id)arg2;
- (id)_initWithPixelOriginX:(unsigned long long)arg1 Y:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)enumerateTilesUsingBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pixelBounds;
- (unsigned long long)pixelHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pixelRegionOfInterest;
- (unsigned long long)pixelWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (unsigned long long)tileColumnsCount;
- (unsigned long long)tileCount;
- (unsigned long long)tileRowsCount;
- (id)tiles;

@end
