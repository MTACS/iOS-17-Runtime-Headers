
@interface DMCReauthSpecifierProvider : DMCSpecifierProvider {
    DMCEnrollmentInterface * _enrollmentInterface;
    PSListController * _presenter;
}

@property (nonatomic, retain) DMCEnrollmentInterface *enrollmentInterface;
@property (nonatomic, readonly) PSListController *presenter;

- (void).cxx_destruct;
- (id)_reauthSpecifier;
- (bool)_shouldAutoPresentReauthFlow;
- (id)enrollmentInterface;
- (bool)handleURL:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2;
- (void)presentReauthFlow:(id)arg1;
- (id)presenter;
- (void)setEnrollmentInterface:(id)arg1;
- (id)specifiers;

@end
