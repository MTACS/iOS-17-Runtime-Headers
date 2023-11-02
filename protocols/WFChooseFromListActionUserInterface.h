
@protocol WFChooseFromListActionUserInterface <WFActionRemoteUserInterface>

@required

- (void)showImagesWithPrompt:(void *)arg1 canSelectAll:(void *)arg2 canSelectMultiple:(void *)arg3 inputItems:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSString *, bool, bool, WFContentCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*

@end
