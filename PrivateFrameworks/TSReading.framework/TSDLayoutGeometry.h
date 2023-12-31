
@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mTransform;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

- (struct CGPoint { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)differsInMoreThanTranslationFrom:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })fullTransform;
- (id)geometryByOutsettingBy:(struct CGSize { double x1; double x2; })arg1;
- (id)geometryByTransformingBy:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)geometryByTranslatingBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)infoGeometry;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithInfoGeometry:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })inverseTransform;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformByConcatenatingTransformTo:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
