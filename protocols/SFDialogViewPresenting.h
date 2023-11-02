
@protocol SFDialogViewPresenting <NSObject>

@required

- (void)dismissDialogView:(void *)arg1 withAdditionalAnimations:(void *)arg2 forDialogController:(void *)arg3; // needs 3 arg types, found 7: SFDialogView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, SFDialogController *
- (void)presentDialogView:(void *)arg1 withAdditionalAnimations:(void *)arg2 forDialogController:(void *)arg3; // needs 3 arg types, found 7: SFDialogView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, SFDialogController *
- (int)webProcessIDForDialogController:(SFDialogController *)arg1;

@end
