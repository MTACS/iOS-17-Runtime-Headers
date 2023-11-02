
@protocol PasswordManagerUI._PMTOTPMigrationControllerDelegate

@required

- (void)totpMigrationController:(_TtC17PasswordManagerUI26_PMTOTPMigrationController *)arg1 presentDetailsForSavedAccount:(WBSSavedAccount *)arg2;
- (void)totpMigrationController:(_TtC17PasswordManagerUI26_PMTOTPMigrationController *)arg1 presentPickerForGenerator:(WBSTOTPGenerator *)arg2;
- (void)totpMigrationControllerFinishedImport:(_TtC17PasswordManagerUI26_PMTOTPMigrationController *)arg1;

@end
