
@interface MCMContainerSchema : NSObject {
    MCMContainerSchemaContext * _context;
    NSNumber * _latestSchemaVersion;
    <MCMMetadataMinimal> * _metadata;
}

@property (nonatomic, readonly) MCMContainerSchemaContext *context;
@property (nonatomic, readonly) NSNumber *latestSchemaVersion;
@property (nonatomic, readonly) <MCMMetadataMinimal> *metadata;

+ (id)containerSchemaWithMetadata:(id)arg1 dataProtectionClass:(int)arg2 libraryRepair:(id)arg3;
+ (bool)schemaIsUpToDateForIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 currentSchemaVersion:(id)arg3 latestSchemaVersion:(id*)arg4;

- (void).cxx_destruct;
- (id)_actionArgsAfterInterpolationOnActionArgs:(id)arg1 replacements:(id)arg2;
- (id)_actionsFromVersion:(id)arg1 toTargetVersion:(id)arg2 context:(id)arg3;
- (bool)_executeActions:(id)arg1 error:(id*)arg2;
- (id)_interpolationReplacements;
- (id)context;
- (id)initWithMetadata:(id)arg1 dataProtectionClass:(int)arg2 libraryRepair:(id)arg3;
- (id)latestSchemaVersion;
- (id)metadata;
- (bool)writeSchemaFromVersion:(id)arg1 toTargetVersion:(id)arg2 error:(id*)arg3;
- (bool)writeSchemaToTargetVersion:(id)arg1 error:(id*)arg2;

@end
