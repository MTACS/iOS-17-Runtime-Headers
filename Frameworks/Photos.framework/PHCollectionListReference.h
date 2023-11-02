
@interface PHCollectionListReference : PHCollectionReference {
    long long  _collectionListSubtype;
    long long  _collectionListType;
    NSArray * _transientCollectionReferences;
}

@property (nonatomic, readonly) long long collectionListSubtype;
@property (nonatomic, readonly) long long collectionListType;
@property (nonatomic, readonly, copy) NSArray *transientCollectionReferences;

+ (id)referenceForCollectionList:(id)arg1;
+ (id)representedType;

- (void).cxx_destruct;
- (id)_transientCollectionInLibrary:(id)arg1;
- (long long)collectionListSubtype;
- (long long)collectionListType;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4 collectionReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7;
- (bool)transient;
- (id)transientCollectionReferences;

@end
