
@protocol PMTOTPMigrationControllerDelegate <NSObject>

@required

- (void)totpMigrationController:(PMTOTPMigrationController *)arg1 presentDetailsForSavedAccount:(WBSSavedAccount *)arg2;
- (void)totpMigrationController:(PMTOTPMigrationController *)arg1 presentPickerForGenerator:(WBSTOTPGenerator *)arg2;
- (void)totpMigrationControllerFinishedImport:(PMTOTPMigrationController *)arg1;

@end
