
@interface CCUICASpringAnimationFactory : NSObject <CCUICAAnimationFactory> {
    CCUICASpringAnimationParameters * _parameters;
    double  _speed;
}

@property (nonatomic, readonly) double animationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (double)animationDuration;
- (id)initWithParameters:(id)arg1 speed:(double)arg2;

@end
