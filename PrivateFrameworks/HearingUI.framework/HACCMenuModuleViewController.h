
@interface HACCMenuModuleViewController : CCUIMenuModuleViewController {
    <HACCContentModuleDelegate> * _delegate;
}

@property (nonatomic) <HACCContentModuleDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)accessibilityPerformEscape;
- (id)delegate;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
