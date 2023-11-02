
@protocol SBSSystemNotesPresentationClientToServerInterface <NSObject>

@required

- (oneway void)activateConfiguration:(SBSSystemNotesPresentationConfiguration *)arg1;
- (oneway void)presentWithConfiguration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SBSSystemNotesPresentationConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
