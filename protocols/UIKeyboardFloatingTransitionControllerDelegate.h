
@protocol UIKeyboardFloatingTransitionControllerDelegate

@required

- (void)didEndTransitionWithController:(UIKeyboardFloatingTransitionController *)arg1;
- (UIInputWindowController *)inputWindowControllerForController:(UIKeyboardFloatingTransitionController *)arg1;
- (bool)shouldBeginTransitionForController:(UIKeyboardFloatingTransitionController *)arg1;
- (void)willBeginTransitionWithController:(UIKeyboardFloatingTransitionController *)arg1;

@end
