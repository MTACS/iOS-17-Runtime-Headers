
@interface PLQueryStats : NSObject {
    NSManagedObjectContext * _context;
    NSSQLiteDatabaseStatistics * _preStats;
}

+ (bool)allowedToTrack;
+ (id)byteCountFormatter;
+ (id)startedQueryStatsWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)stopRecordingDescriptionWithFetchCount:(long long)arg1;

@end
