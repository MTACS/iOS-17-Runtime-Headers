
@interface UIViewUpdateVelocityAnimationDescription : NSObject {
    <UIVectorOperatable> * _targetVelocity;
    <UIVectorOperatable> * _velocity;
}

@property (nonatomic, retain) <UIVectorOperatable> *targetVelocity;
@property (nonatomic, retain) <UIVectorOperatable> *velocity;

+ (id)descriptionWithVelocity:(id)arg1 targetVelocity:(id)arg2;

- (void).cxx_destruct;
- (id)initWithVelocity:(id)arg1 targetVelocity:(id)arg2;
- (void)setTargetVelocity:(id)arg1;
- (void)setVelocity:(id)arg1;
- (id)targetVelocity;
- (id)velocity;

@end
