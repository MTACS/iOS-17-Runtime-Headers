
@interface DSSafetyResetCompletedController : DSOBWelcomeController <DSController> {
    <DSNavigationDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)skip;
- (void)viewDidLoad;

@end
