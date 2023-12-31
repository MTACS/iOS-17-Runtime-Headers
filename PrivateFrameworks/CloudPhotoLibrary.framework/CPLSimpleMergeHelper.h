
@interface CPLSimpleMergeHelper : NSObject {
    CPLEngineStore * _store;
}

@property (nonatomic, readonly) CPLEngineStore *store;

+ (id)_mergerWithConflictsForStore:(id)arg1 conflictingScopeIdentifiers:(id)arg2;
+ (id)_mergerWithNoConflictsForStore:(id)arg1;

- (void).cxx_destruct;
- (bool)_changeCanConflict:(id)arg1;
- (id)initWithEngineStore:(id)arg1;
- (id)mergerForBatch:(id)arg1 error:(id*)arg2;
- (id)store;

@end
