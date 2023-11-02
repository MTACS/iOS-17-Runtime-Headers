
@protocol WBSParsecSearchSessionDelegate <NSObject>

@required

- (NSString *)currentInputTypeForSession:(id <WBSParsecSearchSession>)arg1;
- (void)currentKeyboardIdentifierWithLayoutsForSession:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: <WBSParsecSearchSession> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)session:(id <WBSParsecSearchSession>)arg1 didReceiveResults:(NSArray *)arg2 forQuery:(WBSCompletionQuery *)arg3;

@end
