
@interface CPLChangeStorage : NSObject

@property (nonatomic, readonly) NSString *storageDescription;

- (id)changeWithScopedIdentifier:(id)arg1;
- (id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)getRelatedScopedIdentifier:(id*)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (bool)getStoredChangeType:(unsigned long long*)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (bool)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)storageDescription;

@end
