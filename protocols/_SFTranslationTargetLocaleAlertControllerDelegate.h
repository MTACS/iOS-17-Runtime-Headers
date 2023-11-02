
@protocol _SFTranslationTargetLocaleAlertControllerDelegate <NSObject>

@optional

- (void)translationAlertController:(_SFTranslationTargetLocaleAlertController *)arg1 didSelectLocale:(NSString *)arg2;
- (void)translationAlertController:(void *)arg1 validateTargetLocale:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: _SFTranslationTargetLocaleAlertController *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)translationAlertControllerShouldDismissAfterSelection:(_SFTranslationTargetLocaleAlertController *)arg1;

@end
