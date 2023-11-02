
@interface DDAutoCloseNavigationController : UINavigationController {
    DDFlightAction * _target;
}

@property DDFlightAction *target;

- (void).cxx_destruct;
- (void)closePressed;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)viewDidDisappear:(bool)arg1;

@end
