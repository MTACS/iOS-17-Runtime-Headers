
@protocol CoreDAVDiscoveryTaskGroupDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)discoveryTask:(CoreDAVDiscoveryTaskGroup *)arg1 gotAccountInfo:(id <CoreDAVAccountInfoProvider>)arg2 error:(NSError *)arg3;

@end
