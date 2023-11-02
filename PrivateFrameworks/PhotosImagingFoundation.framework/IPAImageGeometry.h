
@interface IPAImageGeometry : NSObject <IPAImageGeometry, IPAQuadGeometry> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _domain;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _extent;
    NSString * _identifier;
    struct Quad2d { 
        struct Vector2d { 
            double X; 
            double Y; 
        } V0; 
        struct Vector2d { 
            double X; 
            double Y; 
        } V1; 
        struct Vector2d { 
            double X; 
            double Y; 
        } V2; 
        struct Vector2d { 
            double X; 
            double Y; 
        } V3; 
    }  _imageQuad;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addLineFromP0:(struct CGPoint { double x1; double x2; })arg1 P1:(struct CGPoint { double x1; double x2; })arg2 withLabel:(id)arg3 toScene:(id)arg4;
+ (void)addPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 withLabel:(id)arg3 toScene:(id)arg4;
+ (void)addQuadV0:(struct CGPoint { double x1; double x2; })arg1 V1:(struct CGPoint { double x1; double x2; })arg2 V2:(struct CGPoint { double x1; double x2; })arg3 V3:(struct CGPoint { double x1; double x2; })arg4 withLabel:(id)arg5 toScene:(id)arg6;
+ (void)addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withLabel:(id)arg2 toScene:(id)arg3;
+ (void)clearScene:(id)arg1;
+ (id)inputGeometryWithImageSize:(struct CGSize { double x1; double x2; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })domain;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (id)identifier;
- (struct Quad2d { struct Vector2d { double x_1_1_1; double x_1_1_2; } x1; struct Vector2d { double x_2_1_1; double x_2_1_2; } x2; struct Vector2d { double x_3_1_1; double x_3_1_2; } x3; struct Vector2d { double x_4_1_1; double x_4_1_2; } x4; })imageQuad;
- (id)init;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 domain:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithIdentifier:(id)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageQuad:(const struct Quad2d { struct Vector2d { double x_1_1_1; double x_1_1_2; } x1; struct Vector2d { double x_2_1_1; double x_2_1_2; } x2; struct Vector2d { double x_3_1_1; double x_3_1_2; } x3; struct Vector2d { double x_4_1_1; double x_4_1_2; } x4; }*)arg3;

@end
