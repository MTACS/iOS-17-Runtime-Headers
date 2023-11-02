
@protocol PRUIModalControllerDelegate <NSObject>

@optional

- (void)modalController:(PRUIModalController *)arg1 didDismissSheetWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)modalController:(PRUIModalController *)arg1 willDismissSheetWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)modalControllerDidDismissSheet:(PRUIModalController *)arg1;

@end
