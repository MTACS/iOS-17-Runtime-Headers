
@interface BodyPoint : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    float  _score;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) float score;

- (void)dealloc;
- (id)init;
- (struct CGPoint { double x1; double x2; })location;
- (float)score;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScore:(float)arg1;

@end
