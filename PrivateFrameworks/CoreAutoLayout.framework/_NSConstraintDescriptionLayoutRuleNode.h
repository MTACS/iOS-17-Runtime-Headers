
@interface _NSConstraintDescriptionLayoutRuleNode : _NSLayoutRuleNode {
    NSLayoutConstraint * _ownedConstraint;
}

@property (retain) NSLayoutConstraint *ownedConstraint;

- (void)dealloc;
- (id)ownedConstraint;
- (void)setOwnedConstraint:(id)arg1;

@end
