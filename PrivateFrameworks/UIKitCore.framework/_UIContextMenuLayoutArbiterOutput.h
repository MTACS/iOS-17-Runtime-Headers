
@interface _UIContextMenuLayoutArbiterOutput : NSObject {
    NSMapTable * _accessoryPositions;
    struct { 
        unsigned long long attachment; 
        unsigned long long alignment; 
        double attachmentOffset; 
        double alignmentOffset; 
        long long gravity; 
    }  _anchor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
        struct CAPoint3D { 
            double x; 
            double y; 
            double z; 
        } center; 
        struct CGPoint { 
            double x; 
            double y; 
        } anchorPoint; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } transform; 
        double alpha; 
    }  _menu;
    struct { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
        struct CAPoint3D { 
            double x; 
            double y; 
            double z; 
        } center; 
        struct CGPoint { 
            double x; 
            double y; 
        } anchorPoint; 
        struct CGAffineTransform { 
            double a; 
            double b; 
            double c; 
            double d; 
            double tx; 
            double ty; 
        } transform; 
        double alpha; 
    }  _preview;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSMapTable *accessoryPositions;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; } anchor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; } menu;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; } preview;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)accessoryPositions;
- (struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })anchor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })menu;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })preview;
- (void)setAccessoryPositions:(id)arg1;
- (void)setAnchor:(struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMenu:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })arg1;
- (void)setPreview:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; })arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
