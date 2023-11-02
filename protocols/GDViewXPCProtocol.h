
@protocol GDViewXPCProtocol

@required

- (void)accessTokenForFeaturesWithIsSandboxed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GDViewAccessToken *, NSError *, void*
- (void)accessTokenForViewName:(void *)arg1 isSandboxed:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GDViewAccessToken *, NSError *, void*
- (void)performUpdateForViewNames:(void *)arg1 includeDependencies:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)reportSQLiteErrorForViewName:(void *)arg1 sqliteErrorCode:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)reportUnknownErrorForViewName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
