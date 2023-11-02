
@protocol WFDictateTextActionUserInterface <WFActionRemoteUserInterface>

@required

- (void)actionDidBeginListening;
- (void)actionDidReceiveTranscription:(NSString *)arg1;
- (void)dismissWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)showWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
