
@interface PFSceneTaxonomy : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { 
        struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { 
            void *__value_; 
        } __ptr_; 
    }  _backingFile;
    NSString * _dataPath;
    NSString * _digest;
    bool  _forceIndexed;
    NSString * _identifier;
    NSBundle * _localizationBundle;
    const void * _nameMap;
    const void * _sceneMap;
    NSString * _tableName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *digest;
@property (readonly) unsigned long long hash;
@property (readonly) PFSceneTaxonomyNode *rootNode;
@property (readonly) void*rootNodeRef;
@property (getter=digest, readonly) NSString *sha256Hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats

+ (id)latestTaxonomyIdentifier;
+ (id)sharedTaxonomy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser {} *x_1_1_1; } x1; })archiveLineParserForIndexPath:(id)arg1;
- (id)dataArchivePath;
- (id)description;
- (id)digest;
- (unsigned long long)indexFileVersion;
- (const char *)indexLabel;
- (id)indexName;
- (id)init;
- (id)initWithDataPath:(id)arg1 identifier:(id)arg2 localizationBundle:(id)arg3 tableName:(id)arg4 error:(id*)arg5;
- (id)initWithDataPath:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithLatestTaxonomy;
- (bool)loadIndexFile:(const char *)arg1 fileSize:(long long)arg2;
- (bool)loadOrCreateIndex;
- (id)localizedStringForKey:(id)arg1;
- (unsigned long long)nodeCount;
- (id)nodeForName:(id)arg1;
- (id)nodeForSceneClassId:(unsigned int)arg1;
- (void*)nodeRefForName:(id)arg1;
- (void*)nodeRefForSceneClassId:(unsigned int)arg1;
- (id)rootNode;
- (void*)rootNodeRef;
- (unsigned int)sceneClassIdForName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)mad_audioTaxonomy:(bool)arg1 useResultsKey:(bool)arg2;
+ (bool)mad_isExpectedTaxonomy;
+ (id)vcp_sharedTaxonomy;

- (id)mad_allAncestorsForSceneId:(unsigned int)arg1;
- (id)mad_sceneIdFromSceneName:(id)arg1;
- (id)mad_sceneNameFromSceneId:(unsigned int)arg1;

@end
