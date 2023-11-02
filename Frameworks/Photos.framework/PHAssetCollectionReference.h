
@interface PHAssetCollectionReference : PHCollectionReference {
    long long  _assetCollectionSubtype;
    long long  _assetCollectionType;
    NSArray * _transientAssetReferences;
}

@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (nonatomic, readonly) long long assetCollectionType;
@property (nonatomic, readonly, copy) NSArray *transientAssetReferences;

+ (id)referenceForAssetCollection:(id)arg1;
+ (id)representedType;

- (void).cxx_destruct;
- (id)_transientCollectionInLibrary:(id)arg1;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4 assetReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7;
- (bool)transient;
- (id)transientAssetReferences;

@end
