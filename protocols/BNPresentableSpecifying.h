
@protocol BNPresentableSpecifying <BNPresentableIdentifying, BNPresentableUniquelyIdentifying>

@required

- (long long)contentBehavior;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOutsets;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)presentableBehavior;

@end
