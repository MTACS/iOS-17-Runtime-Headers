
@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource <NSObject>

@required

- (bool)allowsConfiguringIndividualStatusBarParts;
- (<SBApplicationSceneStatusBarDescribing> *)statusBarDescriberForStatusBarPart:(NSString *)arg1;
- (NSArray *)statusBarDescribers;
- (long long)statusBarOrientation;

@optional

- (NSArray *)currentlyValidStatusBarPartIdentifiers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSceneIdentifier:(NSString *)arg1 inView:(UIView *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (<SBApplicationSceneStatusBarDescribing> *)statusBarDescriberAtPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(UIView *)arg2 pointInSceneLayoutSpace:(struct CGPoint { double x1; double x2; }*)arg3;
- (NSArray *)statusBarPartsForSceneWithIdentifier:(NSString *)arg1;

@end
