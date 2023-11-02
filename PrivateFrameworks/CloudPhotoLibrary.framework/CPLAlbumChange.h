
@interface CPLAlbumChange : CPLContainerChange <NSCopying, NSSecureCoding> {
    bool  _albumSortAscending;
    unsigned long long  _albumSortType;
    unsigned long long  _albumType;
    NSString * _importedByBundleIdentifier;
    NSString * _keyAssetIdentifier;
    NSString * _name;
    NSString * _parentIdentifier;
    long long  _position;
    NSData * _projectData;
    NSString * _projectDocumentType;
    NSData * _projectPreviewImageData;
}

@property (nonatomic) bool albumSortAscending;
@property (nonatomic) unsigned long long albumSortType;
@property (nonatomic) unsigned long long albumType;
@property (nonatomic, copy) NSString *importedByBundleIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *parentIdentifier;
@property (nonatomic) long long position;
@property (nonatomic, copy) NSData *projectData;
@property (nonatomic, copy) NSString *projectDocumentType;
@property (nonatomic, copy) NSData *projectPreviewImageData;

+ (Class)relatedRecordClass;

- (void).cxx_destruct;
- (bool)albumSortAscending;
- (unsigned long long)albumSortType;
- (unsigned long long)albumType;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)importedByBundleIdentifier;
- (id)name;
- (id)parentIdentifier;
- (id)parentScopedIdentifier;
- (long long)position;
- (id)projectData;
- (id)projectDocumentType;
- (id)projectPreviewImageData;
- (id)propertiesDescription;
- (id)relatedIdentifier;
- (id)scopedIdentifiersForMapping;
- (void)setAlbumSortAscending:(bool)arg1;
- (void)setAlbumSortType:(unsigned long long)arg1;
- (void)setAlbumType:(unsigned long long)arg1;
- (void)setImportedByBundleIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setParentScopedIdentifier:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setProjectData:(id)arg1;
- (void)setProjectDocumentType:(id)arg1;
- (void)setProjectPreviewImageData:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (bool)validateRecordForTracker:(id)arg1;

@end
