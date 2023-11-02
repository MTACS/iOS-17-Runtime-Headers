
@protocol INVCVoiceShortcutClient <NSObject>

@required

- (void)getVoiceShortcutWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VCVoiceShortcut *, NSError *, void*
- (void)getVoiceShortcutsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (LNAction *)linkActionWithAppBundleIdentifier:(NSString *)arg1 appIntentIdentifier:(NSString *)arg2 serializedParameterStates:(NSDictionary *)arg3 error:(id*)arg4;
- (INAppIntent *)migratedAppIntentWithINIntent:(INIntent *)arg1 error:(id*)arg2;
- (FPSandboxingURLWrapper *)resolveBookmarkData:(NSData *)arg1 updatedData:(id*)arg2 error:(id*)arg3;
- (void)sendAceCommandDictionary:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (NSDictionary *)serializedParametersForLinkAction:(LNAction *)arg1 actionMetadata:(LNActionMetadata *)arg2 error:(id*)arg3;
- (void)setInteger:(void *)arg1 forKey:(void *)arg2 inDomain:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setShortcutSuggestions:(NSArray *)arg1 forAppWithBundleIdentifier:(NSString *)arg2;

@end
