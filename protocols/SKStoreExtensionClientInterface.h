
@protocol SKStoreExtensionClientInterface <NSObject>

@required

- (void)dismissViewControllerAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentRequestedViewControllerWithIdentifier:(NSString *)arg1;
- (void)setNeedsTabSelection;

@end
