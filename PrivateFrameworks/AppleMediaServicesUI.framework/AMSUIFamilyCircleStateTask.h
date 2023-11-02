
@interface AMSUIFamilyCircleStateTask : AMSTask {
    FACircleContext * _faContext;
    UIViewController * _presentingViewController;
}

@property (nonatomic, retain) FACircleContext *faContext;
@property (nonatomic, retain) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)faContext;
- (id)initWithJSONDictionary:(id)arg1 presentingViewController:(id)arg2;
- (id)present;
- (id)presentingViewController;
- (void)setFaContext:(id)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
