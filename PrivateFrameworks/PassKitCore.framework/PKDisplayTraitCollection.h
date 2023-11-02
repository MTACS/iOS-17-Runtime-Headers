
@interface PKDisplayTraitCollection : NSObject <NSSecureCoding> {
    double  _canvasScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
}

@property (nonatomic) double canvasScale;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;

+ (bool)supportsSecureCoding;

- (double)canvasScale;
- (struct CGSize { double x1; double x2; })canvasSize;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultTraits;
- (void)setCanvasScale:(double)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;

@end
