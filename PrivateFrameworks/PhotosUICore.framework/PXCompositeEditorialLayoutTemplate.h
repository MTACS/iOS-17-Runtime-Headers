
@interface PXCompositeEditorialLayoutTemplate : NSObject {
    long long  _identifier;
    long long  _numberOfColumns;
    long long  _numberOfRects;
    double * _rectWeights;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _rects;
    bool  _shouldIgnoreWeights;
    double  _tileAspectRatio;
}

@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) long long numberOfRects;
@property (nonatomic, readonly) double tileAspectRatio;

- (void)_enumerateRectsUsingBlock:(id /* block */)arg1;
- (void)_initRectsStorageWithDescriptors:(id)arg1;
- (double)costForFittingLayoutItemInputs:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 ofTotalItemCount:(long long)arg3 normalizedWeights:(in double*)arg4 useSaliency:(bool)arg5;
- (void)dealloc;
- (void)getComputedRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 contentSize:(out struct CGSize { double x1; double x2; }*)arg2 forReferenceSize:(struct CGSize { double x1; double x2; })arg3 interTileSpacing:(double)arg4;
- (long long)identifier;
- (id)init;
- (id)initWithDescriptorDictionary:(id)arg1;
- (long long)numberOfColumns;
- (long long)numberOfRects;
- (double)tileAspectRatio;

@end
