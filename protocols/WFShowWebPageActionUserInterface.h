
@protocol WFShowWebPageActionUserInterface <WFActionRemoteUserInterface>

@required

- (void)showRichText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFFileRepresentation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)showURL:(void *)arg1 readerView:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
