
@interface AMSUIUpdateMultiUserTokenTask : AMSTask {
    ACAccount * _account;
    NSUUID * _homeIdentifier;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSUUID *homeIdentifier;
@property (nonatomic, readonly) UIViewController *viewController;

+ (bool)_errorIsRecoverable:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)homeIdentifier;
- (id)initWithAccount:(id)arg1 homeIdentifier:(id)arg2 viewController:(id)arg3;
- (id)performTask;
- (id)viewController;

@end
