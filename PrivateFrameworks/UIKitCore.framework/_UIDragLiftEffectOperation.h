
@interface _UIDragLiftEffectOperation : NSObject {
    <UIDragInteractionContext> * _context;
    UIDragInteraction * _interaction;
    NSSet * _items;
    UIViewPropertyAnimator * _propertyAnimator;
}

@property (nonatomic, retain) <UIDragInteractionContext> *context;
@property (nonatomic, retain) UIDragInteraction *interaction;
@property (nonatomic, retain) NSSet *items;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;

+ (id)defaultTimingParameters;

- (void).cxx_destruct;
- (id)context;
- (id)initWithLiftAnimationDuration:(double)arg1 liftTimingParameters:(id)arg2;
- (id)interaction;
- (id)items;
- (id)propertyAnimator;
- (void)setContext:(id)arg1;
- (void)setInteraction:(id)arg1;
- (void)setItems:(id)arg1;

@end
