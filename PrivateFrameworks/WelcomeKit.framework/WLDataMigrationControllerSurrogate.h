
@interface WLDataMigrationControllerSurrogate : WLDataMigrationController {
    bool  _forceDownloadError;
}

- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 forceDownloadError:(bool)arg2;
- (void)startMigrationUsingRetryPolicies:(bool)arg1;

@end
