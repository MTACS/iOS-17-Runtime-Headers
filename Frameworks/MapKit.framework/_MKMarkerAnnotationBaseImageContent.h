
@interface _MKMarkerAnnotationBaseImageContent : NSObject {
    long long  _baseImageType;
    int  _blendMode;
    UIColor * _fillColor;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (nonatomic, readonly) long long baseImageType;
@property (nonatomic, readonly) int blendMode;
@property (nonatomic, readonly) UIColor *fillColor;
@property (nonatomic, readonly) UIColor *strokeColor;
@property (nonatomic, readonly) double strokeWidth;

- (void).cxx_destruct;
- (long long)baseImageType;
- (int)blendMode;
- (id)fillColor;
- (id)initWithFillColor:(id)arg1 strokeColor:(id)arg2 strokeWidth:(double)arg3 blendMode:(int)arg4 baseImageType:(long long)arg5;
- (id)strokeColor;
- (double)strokeWidth;

@end
