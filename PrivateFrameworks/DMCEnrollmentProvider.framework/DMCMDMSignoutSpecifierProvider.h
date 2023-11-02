
@interface DMCMDMSignoutSpecifierProvider : DMCSpecifierProvider {
    DMCEnrollmentInterface * _enrollmentInterface;
}

@property (nonatomic, retain) DMCEnrollmentInterface *enrollmentInterface;

- (void).cxx_destruct;
- (void)_specifierForMDMProfileWasTapped:(id)arg1;
- (id)_specifierForSignoutButton;
- (id)enrollmentInterface;
- (void)setEnrollmentInterface:(id)arg1;
- (id)specifiers;
- (id)viewController;

@end
