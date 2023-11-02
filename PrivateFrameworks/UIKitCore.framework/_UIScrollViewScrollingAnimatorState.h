
@interface _UIScrollViewScrollingAnimatorState : NSObject {
    unsigned long long  _direction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _force;
    unsigned long long  _granularity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _maximumVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) struct CGPoint { double x1; double x2; } force;
@property (nonatomic) unsigned long long granularity;
@property (nonatomic) struct CGPoint { double x1; double x2; } maximumVelocity;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;

- (unsigned long long)direction;
- (struct CGPoint { double x1; double x2; })force;
- (unsigned long long)granularity;
- (struct CGPoint { double x1; double x2; })maximumVelocity;
- (struct CGPoint { double x1; double x2; })offset;
- (void)setDirection:(unsigned long long)arg1;
- (void)setForce:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGranularity:(unsigned long long)arg1;
- (void)setMaximumVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
