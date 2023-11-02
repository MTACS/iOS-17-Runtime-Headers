
@interface PMTOTPMigrationController : NSObject <PasswordManagerUI._PMTOTPMigrationControllerDelegate> {
    _TtC17PasswordManagerUI26_PMTOTPMigrationController * _controller;
    <PMTOTPMigrationControllerDelegate> * _delegate;
}

@property (nonatomic) <PMTOTPMigrationControllerDelegate> *delegate;
@property (nonatomic, readonly) long long numberOfCodes;
@property (nonatomic, readonly) NSArray *totpGenerators;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)addGenerator:(id)arg1 toSavedAccount:(id)arg2;
- (id)delegate;
- (id)initWithMigrationURL:(id)arg1;
- (long long)numberOfCodes;
- (void)setDelegate:(id)arg1;
- (id)totpGenerators;
- (void)totpMigrationController:(id)arg1 presentDetailsForSavedAccount:(id)arg2;
- (void)totpMigrationController:(id)arg1 presentPickerForGenerator:(id)arg2;
- (void)totpMigrationControllerFinishedImport:(id)arg1;
- (id)viewController;

@end
