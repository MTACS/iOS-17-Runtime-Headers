
@protocol _LTTextTranslationService

@required

- (void)availableLocalePairsForTask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)configInfoForLocale:(void *)arg1 otherLocale:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSLocale *, NSLocale *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)languagesForText:(void *)arg1 usingModel:(void *)arg2 strategy:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSArray *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTTextLanguageDetectionResult *, void*
- (void)onDeviceModeEnabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)shouldPresentSystemFirstUseConsent:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)translate:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: _LTTranslationParagraph *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LTTranslationResult *, NSError *, void*
- (void)translateParagraphs:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, _LTTranslationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
