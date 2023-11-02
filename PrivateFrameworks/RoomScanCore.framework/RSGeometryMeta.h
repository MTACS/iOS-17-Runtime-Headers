
@interface RSGeometryMeta : NSObject <NSCopying> {
    float  _ceilingHeight;
    void _center;
    void _floorCeilingCount;
    float  _floorHeight;
    int  _imageSize;
    bool  _isCenterScaleUpdated;
    float  _pixelSize;
    void _scale;
    void _shift;
    float  _supportHeight;
    float  _visualCeilingHeight;
    float  _visualFloorHeight;
    int  _zSlice;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
