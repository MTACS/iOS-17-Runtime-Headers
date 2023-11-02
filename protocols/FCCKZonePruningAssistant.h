
@protocol FCCKZonePruningAssistant <NSObject>

@required

- (bool)canHelpPruneZoneName:(NSString *)arg1;
- (NSArray *)pruneRecords:(NSArray *)arg1 forZoneName:(NSString *)arg2;
- (double)softMaxRecordAgeWhenMigratingZoneName:(NSString *)arg1;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(NSString *)arg1;

@end
