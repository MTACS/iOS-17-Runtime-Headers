
@interface _UIContextMenuAccessoryView : UIView {
    struct { 
        unsigned long long attachment; 
        unsigned long long alignment; 
        double attachmentOffset; 
        double alignmentOffset; 
        long long gravity; 
    }  _anchor;
    unsigned long long  _location;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    unsigned long long  _trackingAxis;
}

@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; } anchor;
@property (nonatomic) unsigned long long location;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) unsigned long long trackingAxis;

- (struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })anchor;
- (struct CGPoint { double x1; double x2; })attachmentOffsetWithReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(struct { unsigned long long x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; double x_2_1_3; double x_2_1_4; long long x_2_1_5; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; unsigned long long x4; })arg2;
- (unsigned long long)location;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setAnchor:(struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })arg1;
- (void)setLocation:(unsigned long long)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTrackingAxis:(unsigned long long)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (unsigned long long)trackingAxis;

@end
