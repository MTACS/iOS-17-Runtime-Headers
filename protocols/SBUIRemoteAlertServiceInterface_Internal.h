
@protocol SBUIRemoteAlertServiceInterface_Internal <SBUIRemoteAlertServiceInterface>

@required

- (void)sb_becomeFirstResponder;
- (void)sb_dismissForAlertAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sb_presentForAlertAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sb_preserveInputViewsAnimated:(bool)arg1;
- (void)sb_resignFirstResponder;
- (void)sb_restoreInputViewsAnimated:(bool)arg1;

@end
