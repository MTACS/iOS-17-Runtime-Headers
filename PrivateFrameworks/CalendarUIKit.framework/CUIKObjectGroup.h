
@interface CUIKObjectGroup : NSObject {
    NSMutableDictionary * _objectMap;
    NSDictionary * _originalObjectMap;
    CalDefaultDictionary * _spawnedObjectIdentifiers;
}

@property (retain) NSMutableDictionary *objectMap;
@property (retain) NSDictionary *originalObjectMap;
@property (retain) CalDefaultDictionary *spawnedObjectIdentifiers;

+ (id)_identifierForObject:(id)arg1;
+ (id)_objectMapForObjects:(id)arg1;

- (void).cxx_destruct;
- (bool)_newSeriesSpawnedWithObject:(id)arg1;
- (id)description;
- (id)initWithObjects:(id)arg1;
- (void)newObject:(id)arg1 spawnedFromObject:(id)arg2;
- (id)objectIdentifiers;
- (id)objectMap;
- (id)objects;
- (bool)objectsBelongInGroup:(id)arg1;
- (id)originalObjectMap;
- (id)originalObjects;
- (void)setObjectMap:(id)arg1;
- (void)setOriginalObjectMap:(id)arg1;
- (void)setSpawnedObjectIdentifiers:(id)arg1;
- (id)shiftedOccurrencePreviouslySpawnedByIdentifier:(id)arg1;
- (id)spawnedObjectIdentifiers;

@end
