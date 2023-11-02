
@interface VKSnapshotElevationRaster : NSObject <NSSecureCoding> {
    float  _elevationScale;
    int  _height;
    short  _minElevationInMeters;
    NSData * _rasterData;
    float  _scale;
    struct QuadTile { 
        unsigned char _type; 
        unsigned char _level; 
        int _yIdx; 
        int _xIdx; 
    }  _tile;
    float  _tileSizeInMeters;
    int  _width;
}

@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) short minElevationInMeters;
@property (nonatomic, retain) NSData *rasterData;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) const struct QuadTile { unsigned char x1; unsigned char x2; int x3; int x4; }*tile;
@property (nonatomic, readonly) float tileSizeInMeters;
@property (nonatomic, readonly) int width;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)_rasterElevationInMetersAtPoint:(struct Matrix<int, 2, 1> { int x1[2]; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)getElevationAtPoint:(const void*)arg1;
- (int)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuadTile:(struct QuadTile { unsigned char x1; unsigned char x2; int x3; int x4; })arg1 width:(int)arg2 height:(int)arg3 scale:(float)arg4 tileSizeInMeters:(float)arg5 minElevationInMeters:(short)arg6;
- (short)minElevationInMeters;
- (id)rasterData;
- (float)scale;
- (void)setRasterData:(id)arg1;
- (const struct QuadTile { unsigned char x1; unsigned char x2; int x3; int x4; }*)tile;
- (float)tileSizeInMeters;
- (int)width;

@end
