
@protocol _LSQueryResolving <NSObject>

@required

- (void)_enumerateResolvedResultsOfQuery:(void *)arg1 XPCConnection:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 10: _LSQuery *, NSXPCConnection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LSQueryResult *, NSError *, bool*, void*
- (NSDictionary *)_resolveQueries:(NSSet *)arg1 XPCConnection:(NSXPCConnection *)arg2 error:(id*)arg3;

@end
