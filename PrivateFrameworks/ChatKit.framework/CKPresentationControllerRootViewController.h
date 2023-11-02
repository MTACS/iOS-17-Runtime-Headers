
@interface CKPresentationControllerRootViewController : UIViewController {
    bool  _allowsRotation;
    bool  _restrictedToPortraitOrientation;
}

@property (nonatomic) bool allowsRotation;
@property (nonatomic) bool restrictedToPortraitOrientation;

- (bool)allowsRotation;
- (bool)restrictedToPortraitOrientation;
- (void)setAllowsRotation:(bool)arg1;
- (void)setRestrictedToPortraitOrientation:(bool)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
