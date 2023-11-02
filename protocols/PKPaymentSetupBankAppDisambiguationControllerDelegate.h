
@protocol PKPaymentSetupBankAppDisambiguationControllerDelegate <NSObject>

@required

- (void)deselectCells;
- (void)didSelectCameraWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)didSelectInAppWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)reloadItem:(id)arg1 animated:(bool)arg2;

@end
