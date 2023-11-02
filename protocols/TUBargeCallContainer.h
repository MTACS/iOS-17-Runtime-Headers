
@protocol TUBargeCallContainer <NSObject>

@required

- (TUCall *)bargeCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (NSArray *)bargeCalls;
- (NSArray *)bargeCallsPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, TUCall *, void*
- (TUCall *)frontmostBargeCall;

@end
