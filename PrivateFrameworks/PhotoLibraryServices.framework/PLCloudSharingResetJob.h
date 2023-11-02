
@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (long long)daemonOperation;
- (void)run;
- (void)runDaemonSide;

@end
