
@protocol TCSServerXPC <NSObject>

@required

- (void)disconnectCall:(TCSCall *)arg1;
- (void)ensureUplinkMuted;
- (void)getCall:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TCSCall *, void*
- (void)getLogEntryForCallWithUniqueProxyIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TCSCall *, void*
- (void)queryIsTinCannable:(CNContact *)arg1;
- (void)sessionViewControllerViewDidAppear;
- (void)setUplinkMuted:(void *)arg1 for:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, TCSCall *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
