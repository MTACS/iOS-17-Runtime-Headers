
@protocol FBSOpenApplicationServiceServerInterface

@required

- (void)canOpenApplication:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)openApplication:(void *)arg1 withOptions:(void *)arg2 originator:(void *)arg3 requestID:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, FBSOpenApplicationOptions *, BSProcessHandle *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BSProcessHandle *, NSError *, void*

@end
