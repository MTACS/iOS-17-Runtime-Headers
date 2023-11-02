
@interface PXFaceTileImageCombinerContext : NSObject {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    double  _displayScale;
    double  _imageOffset;
    double  _imageSize;
    bool  _isAscending;
    bool  _isRTL;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) double borderWidth;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) double imageOffset;
@property (nonatomic, readonly) double imageSize;
@property (nonatomic, readonly) bool isAscending;
@property (nonatomic, readonly) bool isRTL;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (double)displayScale;
- (double)imageOffset;
- (double)imageSize;
- (id)initWithDisplayScale:(double)arg1 isRTL:(bool)arg2 isAscending:(bool)arg3 imageSize:(double)arg4 imageOffset:(double)arg5 backgroundColor:(id)arg6 borderColor:(id)arg7 borderWidth:(double)arg8;
- (bool)isAscending;
- (bool)isRTL;

@end
