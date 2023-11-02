
@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph> {
    unsigned short  _glyph;
    UIBezierPath * _path;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _pathTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short glyph;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } pathTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned short)glyph;
- (id)path;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pathTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setGlyph:(unsigned short)arg1;
- (void)setPath:(id)arg1;
- (void)setPathTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
