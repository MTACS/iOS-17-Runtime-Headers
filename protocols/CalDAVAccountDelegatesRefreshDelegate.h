
@protocol CalDAVAccountDelegatesRefreshDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)delegateRefreshForPrincipal:(id <CalDAVPrincipal>)arg1 completedWithError:(NSError *)arg2;

@end
