
@protocol _AuthorizationRemoteViewControllerHostDelegate <NSObject>

@required

- (void)didProvideAuthorizationRequirementWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sheetDidFinishWithError:(NSError *)arg1;

@end
