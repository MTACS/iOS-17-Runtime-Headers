
@interface BookmarksDatabaseHealthReporter : NSObject {
    double  _lastReportTimeInterval;
}

- (bool)_shouldReportDatabaseHealth;
- (id)_userDefaults;
- (void)reportDatabaseHealth;

@end
