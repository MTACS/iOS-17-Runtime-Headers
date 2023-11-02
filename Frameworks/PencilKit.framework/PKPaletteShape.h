
@interface PKPaletteShape : NSObject {
    UIImage * _image;
    long long  _shapeType;
}

@property (nonatomic, readonly) UIImage *image;
@property (readonly) long long shapeType;

+ (id)shapeWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)image;
- (id)initWithShapeType:(long long)arg1;
- (long long)shapeType;

@end
