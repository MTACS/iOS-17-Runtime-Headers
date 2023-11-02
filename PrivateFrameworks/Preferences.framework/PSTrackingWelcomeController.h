
@interface PSTrackingWelcomeController : UINavigationController {
    OBTextWelcomeController * _controller;
}

@property (nonatomic, retain) OBTextWelcomeController *controller;

- (void).cxx_destruct;
- (id)aboutText;
- (id)controller;
- (void)donePressed;
- (id)init;
- (void)setController:(id)arg1;

@end
