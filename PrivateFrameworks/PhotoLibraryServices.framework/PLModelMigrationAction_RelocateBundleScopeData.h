
@interface PLModelMigrationAction_RelocateBundleScopeData : PLModelMigrationAction <PLModelMigrationAction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (id)legacyPrefixPathWithType:(unsigned char)arg1;
- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id*)arg2;
- (long long)renameWithDestinationPath:(unsigned char)arg1 error:(id*)arg2;
- (long long)updateResourceFilePathWithManagedObjectContext:(id)arg1 bundleScope:(unsigned short)arg2 progress:(id)arg3 error:(id*)arg4;

@end
