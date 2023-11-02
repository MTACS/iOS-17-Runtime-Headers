
@interface MagnifierSupport.LensFilteringViewController : UIViewController {
    void brightness;
    void colorFilter;
    void contrast;
}

- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
