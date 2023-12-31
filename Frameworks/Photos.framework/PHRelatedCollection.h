
@interface PHRelatedCollection : PHAssetCollection {
    NSArray * _debugInfo;
    NSString * _highlightLocalIdentifier;
    NSArray * _momentLocalIdentifiers;
    PHObject * _relatedObject;
    unsigned long long  _relationType;
    NSString * _subtitle;
    long long  _titleCategory;
}

@property (nonatomic, readonly) NSArray *debugInfo;
@property (nonatomic, readonly, copy) NSString *highlightLocalIdentifier;
@property (nonatomic, readonly) NSArray *momentLocalIdentifiers;
@property (nonatomic, readonly) PHObject *relatedObject;
@property (nonatomic, readonly) unsigned long long relationType;
@property (nonatomic, readonly) NSString *subtitle;

+ (id)_relatedCollectionsFromInfos:(id)arg1 relatedObject:(id)arg2 photoLibrary:(id)arg3;
+ (id)_transientCollectionListWithCollectionsRelatedToLocalIdentifiers:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 photoLibrary:(id)arg4;
+ (id)transientCollectionListWithCollectionsRelatedToObject:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;
+ (id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (bool)canPerformEditOperation:(long long)arg1;
- (id)debugInfo;
- (id)highlightLocalIdentifier;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 relationType:(unsigned long long)arg3 relatedObject:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleCategory:(long long)arg7 highlightLocalIdentifier:(id)arg8 momentLocalIdentifiers:(id)arg9 debugInfo:(id)arg10;
- (id)localizedSubtitle;
- (id)momentLocalIdentifiers;
- (id)relatedObject;
- (unsigned long long)relationType;
- (id)subtitle;
- (long long)titleCategory;

@end
