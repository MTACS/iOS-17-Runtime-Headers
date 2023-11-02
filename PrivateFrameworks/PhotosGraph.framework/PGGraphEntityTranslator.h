
@interface PGGraphEntityTranslator : NSObject {
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)entityClassName;
+ (bool)includesRelationshipChanges;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)uuidsFromLocalIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)graphChangesForDeletedLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)graphChangesForInsertedLocalIdentifiers:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;

@end
