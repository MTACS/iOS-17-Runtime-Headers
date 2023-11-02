
@interface PGUpNextMemoriesGenerationRequest : NSObject {
    NSArray * _customVectors;
    NSSet * _memoryLocalIdentifiersToAvoid;
    NSArray * _momentUUIDs;
    NSString * _rootMemoryLocalIdentifier;
    unsigned short  _sharingFilter;
    unsigned long long  _targetUpNextMemoryCount;
    bool  _wantsVerboseDebugInfo;
}

@property (nonatomic, readonly) NSArray *customVectors;
@property (nonatomic, readonly) NSSet *memoryLocalIdentifiersToAvoid;
@property (nonatomic, readonly) NSArray *momentUUIDs;
@property (nonatomic, readonly) NSString *rootMemoryLocalIdentifier;
@property (nonatomic, readonly) unsigned short sharingFilter;
@property (nonatomic, readonly) unsigned long long targetUpNextMemoryCount;
@property (nonatomic, readonly) bool wantsVerboseDebugInfo;

+ (id)_baseMemoryFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)_memoryNodesWithSignificantOverlapWithMomentNodes:(id)arg1;
+ (id)_requestErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)requestWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_enumerateMemoriesToAvoidWithWorkingContext:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_fetchRootMemoryWithPhotoLibrary:(id)arg1;
- (id)_momentUUIDsForMemory:(id)arg1;
- (id)customVectors;
- (id)ephemeralMemoriesByUniqueMemoryIdentifiersWithWorkingContext:(id)arg1;
- (id)fetchMemoryLocalIdentifiersWithWorkingContext:(id)arg1 musicCurationOptions:(id)arg2 error:(id*)arg3;
- (id)initWithRootMemoryLocalIdentifier:(id)arg1 momentUUIDs:(id)arg2 memoryLocalIdentifiersToAvoid:(id)arg3 targetUpNextMemoryCount:(unsigned long long)arg4 customVectors:(id)arg5 wantsVerboseDebugInfo:(bool)arg6 sharingFilter:(unsigned short)arg7;
- (id)initWithRootMemoryLocalIdentifier:(id)arg1 momentUUIDs:(id)arg2 memoryLocalIdentifiersToAvoid:(id)arg3 targetUpNextMemoryCount:(unsigned long long)arg4 sharingFilter:(unsigned short)arg5;
- (id)memoryLocalIdentifiersToAvoid;
- (id)momentUUIDs;
- (id)rootMemoryLocalIdentifier;
- (unsigned short)sharingFilter;
- (unsigned long long)targetUpNextMemoryCount;
- (id)upNextMemoryLocalIdentifiersWithWorkingContext:(id)arg1 rootMemory:(id)arg2 ephemeralMemoriesByUniqueMemoryIdentifiers:(id)arg3 uniqueMemoryIdentifiersOfMemoriesToAvoid:(id)arg4 aggregator:(id)arg5 debugInfo:(out id*)arg6 error:(id*)arg7;
- (bool)wantsVerboseDebugInfo;

@end
