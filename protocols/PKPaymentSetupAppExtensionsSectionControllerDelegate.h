
@protocol PKPaymentSetupAppExtensionsSectionControllerDelegate <NSObject>

@required

- (bool)didSelectAppExtensionWithIdentifier:(void *)arg1 title:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)reloadRequiredForSectionIdentifier:(NSString *)arg1 animated:(bool)arg2;

@end
