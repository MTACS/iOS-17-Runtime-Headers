
@protocol MSComposeBodyFieldController <NSObject>

@required

- (void)changeQuoteLevelBy:(long long)arg1 withUndoActionName:(NSString *)arg2;
- (void)enableQuickReply:(bool)arg1;
- (void)insertRichLinkWithURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)makeRichLinkFromSelection;
- (void)removeRichLinkFromSelection;
- (void)stripCustomBodyIdentifiers;

@end
