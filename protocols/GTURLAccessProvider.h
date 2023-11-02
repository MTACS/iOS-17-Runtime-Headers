
@protocol GTURLAccessProvider

@required

- (void)copyIdentifier:(void *)arg1 toDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (NSURL *)makeURL:(NSURL *)arg1;
- (void)securityScopedURLFromSandboxID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (void)transferIdentifier:(void *)arg1 toDevice:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (NSURL *)urlForPath:(NSString *)arg1;

@end
