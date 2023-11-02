
@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase {
    UIAnimatableProperty * _animatableProperty;
}

@property (nonatomic, readonly) UIAnimatableProperty *animatableProperty;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;

- (void).cxx_destruct;
- (id)animatableProperty;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)isInvalidated;
- (void)setTransformer:(id)arg1;
- (id)transformer;

@end
