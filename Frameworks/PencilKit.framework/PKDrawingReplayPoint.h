
@interface PKDrawingReplayPoint : NSObject {
    double  _delay;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    unsigned long long  _type;
}

@property (nonatomic) double delay;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) unsigned long long type;

- (double)delay;
- (struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })pkInputPointWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })point;
- (void)setDelay:(double)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
