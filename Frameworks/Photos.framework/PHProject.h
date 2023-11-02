
@interface PHProject : PHAssetCollection {
    NSDate * _creationDate;
    NSString * _projectDocumentType;
    NSData * _projectExtensionData;
    NSString * _projectExtensionIdentifier;
    NSString * _projectRenderUuid;
}

@property (nonatomic, readonly) bool hasProjectPreview;
@property (nonatomic, readonly) NSData *projectData;
@property (nonatomic, readonly) NSString *projectDocumentType;
@property (nonatomic, readonly) NSData *projectExtensionData;
@property (nonatomic, readonly) NSString *projectExtensionIdentifier;
@property (nonatomic, readonly) NSString *projectRenderUuid;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchProjectsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (bool)canContainCustomKeyAssets;
- (bool)canPerformEditOperation:(long long)arg1;
- (id)creationDate;
- (bool)hasProjectPreview;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)projectData;
- (id)projectDocumentType;
- (id)projectExtensionData;
- (id)projectExtensionIdentifier;
- (id)projectRenderUuid;
- (bool)shouldQueryForCustomKeyAsset;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)px_isProject;
- (id)px_navigationURLHost;
- (id)px_rootCollectionList;

@end
