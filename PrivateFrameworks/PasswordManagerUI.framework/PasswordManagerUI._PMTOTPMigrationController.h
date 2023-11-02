
@interface PasswordManagerUI._PMTOTPMigrationController : NSObject {
    void appState;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  migrationURL;
    void passwordManager;
    void totpMigrationModel;
    void viewController;
}

@property (nonatomic) <_TtP17PasswordManagerUI34_PMTOTPMigrationControllerDelegate_> *delegate;
@property (nonatomic, readonly) long long numberOfCodes;
@property (nonatomic, readonly) NSArray *totpGenerators;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)addGenerator:(id)arg1 toSavedAccount:(id)arg2;
- (id)delegate;
- (id)init;
- (id)initWithMigrationURL:(id)arg1 delegate:(id)arg2;
- (long long)numberOfCodes;
- (void)setDelegate:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)totpGenerators;
- (id)viewController;

@end
