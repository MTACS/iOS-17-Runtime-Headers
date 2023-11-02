
@interface CSDNDBedtimeGreetingViewController : CSModalViewControllerBase <CSModalViewDelegate> {
    <CSDNDBedtimeGreetingDelegate> * _delegate;
    UIColor * _legibilityPrimaryColor;
    CLInUseAssertion * _weatherInUseAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSDNDBedtimeGreetingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_greetingString;
- (void)aggregateAppearance:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)handleEvent:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (id)initWithLegibilityPrimaryColor:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
