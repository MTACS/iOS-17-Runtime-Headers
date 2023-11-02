
@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    NSMutableSet * _failedLogLocations;
    NSMutableSet * _ignoredLogLocations;
    int  _lock;
    NSMutableDictionary * _logLocationsToEncounteredErrors;
    NSMutableSet * _pendingLogLocations;
    NSMutableSet * _scheduledLogLocations;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPendingLogLocations:(id)arg1;

@end
