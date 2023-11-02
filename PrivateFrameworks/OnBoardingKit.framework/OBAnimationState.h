
@interface OBAnimationState : NSObject {
    NSString * _darkName;
    NSString * _name;
    double  _transitionDuration;
    double  _transitionSpeed;
}

@property (nonatomic, retain) NSString *darkName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double transitionSpeed;

- (void).cxx_destruct;
- (id)darkName;
- (id)initWithStateName:(id)arg1 darkStateName:(id)arg2 transitionDuration:(double)arg3 transitionSpeed:(double)arg4;
- (id)initWithStateName:(id)arg1 transitionDuration:(double)arg2 transitionSpeed:(double)arg3;
- (id)name;
- (void)setDarkName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTransitionDuration:(double)arg1;
- (void)setTransitionSpeed:(double)arg1;
- (id)stateForLayer:(id)arg1;
- (double)transitionDuration;
- (double)transitionSpeed;

@end
