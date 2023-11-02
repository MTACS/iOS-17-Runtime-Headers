
@protocol WFSiriUIPresenterInterface <NSObject>

@required

- (void)performSiriRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WFSiriActionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSiriActionResponse *, void*
- (void)willBeginExecutingShortcutStep:(NSNumber *)arg1;
- (void)willBeginExecutingShortcutWithActionCount:(NSNumber *)arg1;

@end
