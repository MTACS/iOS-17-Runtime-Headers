
@protocol SUICVoiceSelectionDataUpdating <NSObject>

@required

- (void)changeSiriDialectLanguageToLanguageIdentifiedByLanguageCode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)changeSiriVoiceToVoice:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AFVoiceInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
