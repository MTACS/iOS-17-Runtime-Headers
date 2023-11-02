
@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing> {
    PLManagedObject * _backingManagedObject;
    NSMutableOrderedSet * _ignoredKeys;
    NSMutableDictionary * _modifiedKeyValues;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PLManagedObject *backingManagedObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *ignoredKeys;
@property (nonatomic, retain) NSMutableDictionary *modifiedKeyValues;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backingManagedObject;
- (id)ignoredKeys;
- (id)initWithPLManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (id)modifiedKeyValues;
- (id)mutableAccessingCopy;
- (id)newObjectWithPropertySets:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)photoLibrary;
- (void)removeObjectForKey:(id)arg1;
- (void)setIgnoredKeys:(id)arg1;
- (void)setModifiedKeyValues:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
