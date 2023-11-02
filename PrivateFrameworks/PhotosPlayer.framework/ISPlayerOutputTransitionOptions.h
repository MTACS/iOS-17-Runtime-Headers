
@interface ISPlayerOutputTransitionOptions : NSObject {
    double  _transitionDuration;
}

@property (nonatomic) double transitionDuration;

- (id)description;
- (id)init;
- (void)setTransitionDuration:(double)arg1;
- (double)transitionDuration;

@end
