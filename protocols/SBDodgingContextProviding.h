
@protocol SBDodgingContextProviding <SBChainableModifierContext>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentViewBounds;
- (long long)interfaceOrientation;
- (SBDodgingModel *)model;
- (SBDodgingItemPreference *)preferenceForIdentifier:(NSString *)arg1;
- (double)spaceBetweenIdentifiers;

@end
