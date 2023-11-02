
@interface NSLightweightMigrationStage : NSMigrationStage {
    NSMigrationStage * _subsequentStage;
    NSArray * _versionChecksums;
}

@property (retain) NSMigrationStage *subsequentStage;
@property (readonly) NSArray *versionChecksums;

- (void)dealloc;
- (id)initWithVersionChecksums:(id)arg1;
- (void)setSubsequentStage:(id)arg1;
- (id)subsequentStage;
- (id)versionChecksums;

@end
