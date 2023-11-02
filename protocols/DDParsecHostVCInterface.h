
@protocol DDParsecHostVCInterface

@required

- (void)getStatusBarHidden:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)interactionEndedWithPunchout:(bool)arg1;
- (void)loadReportAnIssueImage:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)openParsecURL:(NSURL *)arg1;
- (void)openTrailerPunchout:(SFPunchout *)arg1;
- (void)performClientQueryWithServerAccessPermitted:(bool)arg1 localSearchPermitted:(bool)arg2;
- (void)performClientTextQueryWithTerm:(void *)arg1 queryId:(void *)arg2 sessionId:(void *)arg3 userAgent:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSString *, unsigned long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remoteVCIsReady;
- (void)reportAnIssueWithReportIdentifier:(NSString *)arg1 sfReportData:(NSData *)arg2;
- (void)showingErrorView:(bool)arg1;
- (void)showingFTE:(bool)arg1;

@end
