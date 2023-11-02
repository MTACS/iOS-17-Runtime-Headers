
@interface HMIVideoAnnotator : HMFObject <HMFLogging> {
    struct CGColorSpace { } * _colorSpace;
    struct CGContext { } * _context;
    struct __CTFont { } * _font;
    struct __CVBuffer { } * _pixelBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (struct __CTFont { }*)_createFontWithSize:(double)arg1;
- (void)dealloc;
- (void)draw:(id /* block */)arg1;
- (void)drawBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2 text:(id)arg3 color:(const double*)arg4;
- (void)drawPolygonWithNormalizedPoints:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 width:(double)arg2 color:(const double*)arg3;
- (void)drawText:(id)arg1 at:(struct CGPoint { double x1; double x2; })arg2 color:(const double*)arg3;
- (void)drawTextHeaderBar:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 fontSize:(double)arg2;

@end
