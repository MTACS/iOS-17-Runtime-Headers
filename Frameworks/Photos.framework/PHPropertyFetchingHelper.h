
@interface PHPropertyFetchingHelper : NSObject {
    NSDictionary * _fetchedPropertyNamesByEntityName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _PHDictionaryKeyValueWrapper * _lock_dictionaryWrapper;
    PHPhotoLibrary * _photoLibrary;
    NSDictionary * _propertyValuesByOID;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)fetchPropertiesForObjectIDs:(id)arg1 propertyNamesByEntityName:(id)arg2 photoLibrary:(id)arg3;

- (void).cxx_destruct;
- (bool)evaluateQuery:(id)arg1 withObjectID:(id)arg2 outMissingPropertyNames:(out id*)arg3;
- (id)fetchedPropertiesForObjectID:(id)arg1;
- (id)init;
- (id)initWithObjectIDs:(id)arg1 propertyNamesByEntityName:(id)arg2 photoLibrary:(id)arg3;
- (id)photoLibrary;

@end
