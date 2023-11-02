
@protocol CSApplicationHosting <SBApplicationHosting>

@required

- (void)conformsToCSApplicationHosting;
- (bool)handlesRotationIndependentOfCoverSheet;

@end
