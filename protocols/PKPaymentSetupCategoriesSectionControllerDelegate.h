
@protocol PKPaymentSetupCategoriesSectionControllerDelegate <NSObject>

@required

- (bool)didSelectCategory:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentSetupProductCategory *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)didSelectYourCardsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (void)reloadRequiredForSectionIdentifier:(NSString *)arg1 animated:(bool)arg2;

@end
