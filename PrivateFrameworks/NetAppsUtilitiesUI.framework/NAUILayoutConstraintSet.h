
@interface NAUILayoutConstraintSet : NSObject {
    id /* block */  _builder;
    NSArray * _constraints;
    UIView * _owningView;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) id /* block */ builder;
@property (nonatomic, copy) NSArray *constraints;
@property (nonatomic, readonly) UIView *owningView;

- (void).cxx_destruct;
- (void)activateIfNeeded;
- (id /* block */)builder;
- (id)constraints;
- (id)initWithOwningView:(id)arg1 constraintBuilder:(id /* block */)arg2;
- (void)invalidate;
- (bool)isActive;
- (id)owningView;
- (void)setConstraints:(id)arg1;
- (void)updateConstraintConstants;

@end
