
@interface MSUDataAccessor : NSObject

+ (id)bootUUIDWithError:(id*)arg1;
+ (void)buildErrorForRef:(id*)arg1 code:(long long)arg2 description:(id)arg3;
+ (unsigned long long)cryptex1TicketType;
+ (id)errorNameForCode:(long long)arg1;
+ (id)hardwareModelWithError:(id*)arg1;
+ (id)ioreg:(id)arg1 property:(id)arg2 error:(id*)arg3;
+ (id)sharedDataAccessor;

- (id)copyBootManifestHashWithError:(id*)arg1;
- (id)copyMountPointForVolumeType:(int)arg1 error:(id*)arg2;
- (id)copyPathForPersistentData:(int)arg1 error:(id*)arg2;
- (id)copyPathForPersonalizedData:(int)arg1 error:(id*)arg2;
- (id)copyPersistentDataPathsWithError:(id*)arg1;
- (id)hardwareRootWithError:(id*)arg1;
- (id)init;
- (id)personalizedRootWithError:(id*)arg1;
- (id)resolveFilePathForEntry:(const struct path_table_entry { union { int x_1_1_1; int x_1_1_2; } x1; bool x2; id x3; id x4; }*)arg1 error:(id*)arg2;

@end
