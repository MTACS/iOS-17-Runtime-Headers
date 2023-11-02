
@interface PXFocusTimelineEvent : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    bool  _shouldAnimate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    unsigned long long  _type;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) bool shouldAnimate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly) unsigned long long type;

- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 type:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })location;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldAnimate:(bool)arg1;
- (bool)shouldAnimate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (unsigned long long)type;

@end
