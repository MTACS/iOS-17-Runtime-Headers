
@interface _UIViewServiceDummyPopoverController : UIPopoverController {
    <_UIViewServiceDummyPopoverControllerDelegate> * _dummyPopoverControllerDelegate;
}

@property (nonatomic) <_UIViewServiceDummyPopoverControllerDelegate> *dummyPopoverControllerDelegate;

+ (Class)_popoverViewClass;

- (void).cxx_destruct;
- (bool)_attemptsToAvoidKeyboard;
- (void)_popoverView:(id)arg1 didSetUseToolbarShine:(bool)arg2;
- (void)_super_setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)dummyPopoverControllerDelegate;
- (void)setDummyPopoverControllerDelegate:(id)arg1;
- (void)setPopoverContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2;

@end
