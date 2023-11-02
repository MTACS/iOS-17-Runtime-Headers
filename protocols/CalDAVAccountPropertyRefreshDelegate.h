
@protocol CalDAVAccountPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)propertyRefreshForPrincipal:(id <CalDAVPrincipal>)arg1 completedWithError:(NSError *)arg2;

@end
