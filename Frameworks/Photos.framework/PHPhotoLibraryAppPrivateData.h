
@interface PHPhotoLibraryAppPrivateData : NSObject {
    PLAppPrivateData * _impl;
    PHPhotoLibrary * _photoLibrary;
}

@property (retain) PLAppPrivateData *impl;
@property PHPhotoLibrary *photoLibrary;

+ (bool)accessInstanceVariablesDirectly;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (id)impl;
- (id)initWithLibrary:(id)arg1;
- (void)invalidate;
- (id)photoLibrary;
- (void)setImpl:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (bool)setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (bool)setValue:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (bool)setValuesForKeysWithDictionary:(id)arg1 error:(id*)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
