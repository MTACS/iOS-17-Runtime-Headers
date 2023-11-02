
@interface PFSceneGeography : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { 
        struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { 
            void *__value_; 
        } __ptr_; 
    }  _backingFile;
    NSString * _dataArchivePath;
    const void * _floatMap;
    const void * _poi;
    const void * _scenes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser {} *x_1_1_1; } x1; })archiveLineParserForIndexPath:(id)arg1;
- (id)dataArchivePath;
- (struct c_iterator<boost::unordered::detail::node<boost::interprocess::allocator<pf::SceneGeographyNode, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>, std::pair<const boost::container::basic_string<char, std::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>>, pf::SceneGeographyNode>>> { struct offset_ptr<boost::unordered::detail::node<boost::interprocess::allocator<pf::SceneGeographyNode, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>, std::pair<const boost::container::basic_string<char, std::char_traits<char>, boost::interprocess::allocator<char, boost::interprocess::segment_manager<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>>, pf::SceneGeographyNode>>, long, unsigned long, 0UL> { union offset_ptr_internal<unsigned long, 0UL> { unsigned long long x_1_2_1; union aligned_struct_wrapper<8UL, 1UL> { struct aligned_struct<8UL, 1UL> { unsigned char x_1_4_1[8]; } x_2_3_1; unsigned char x_2_3_2[8]; } x_1_2_2; } x_1_1_1; } x1; })findPOIHash:(id)arg1;
- (unsigned long long)indexFileVersion;
- (const char *)indexLabel;
- (id)indexName;
- (bool)indexSupported;
- (bool)loadIndexFile:(const char *)arg1 fileSize:(long long)arg2;
- (bool)loadOrCreateIndex;
- (double)popularityForPOI:(id)arg1 popularity:(unsigned short)arg2;
- (id)scenesByScoreForPOIHash:(id)arg1;
- (double)scoreForPOI:(id)arg1 scenes:(id)arg2 maxScenesCount:(long long)arg3 popularityWeight:(double)arg4;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_sharedSceneGeography;

@end
