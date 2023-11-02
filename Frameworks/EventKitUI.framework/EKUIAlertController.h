
@interface EKUIAlertController : UIAlertController {
    bool  _prohibitsRotation;
}

@property (nonatomic) bool prohibitsRotation;

- (bool)prohibitsRotation;
- (void)setProhibitsRotation:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
