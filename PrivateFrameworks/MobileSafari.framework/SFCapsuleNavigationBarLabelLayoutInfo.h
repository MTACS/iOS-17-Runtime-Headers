
@interface SFCapsuleNavigationBarLabelLayoutInfo : NSObject {
    NSLayoutConstraint * _constraintForHorizontalAlignment;
    NSLayoutConstraint * _constraintToItemAbove;
    NSLayoutConstraint * _constraintToItemBelow;
    UIView * _view;
}

@property (nonatomic, retain) NSLayoutConstraint *constraintForHorizontalAlignment;
@property (nonatomic, retain) NSLayoutConstraint *constraintToItemAbove;
@property (nonatomic, retain) NSLayoutConstraint *constraintToItemBelow;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)constraintForHorizontalAlignment;
- (id)constraintToItemAbove;
- (id)constraintToItemBelow;
- (id)initWithView:(id)arg1;
- (void)setConstraintForHorizontalAlignment:(id)arg1;
- (void)setConstraintToItemAbove:(id)arg1;
- (void)setConstraintToItemBelow:(id)arg1;
- (id)view;

@end
