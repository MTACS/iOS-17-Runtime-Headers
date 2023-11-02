
@interface PFTimeZoneLookup : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { 
        struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family>, boost::interprocess::iset_index>>> { 
            void *__value_; 
        } __ptr_; 
    }  _backingFile;
    const void * _rtree;
    const void * _timezones;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })anyCoordinateForTimeZoneName:(id)arg1;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser {} *x_1_1_1; } x1; })archiveLineParserForIndexPath:(id)arg1;
- (unsigned long long)indexFileVersion;
- (const char *)indexLabel;
- (id)indexName;
- (bool)indexSupported;
- (bool)loadIndexFile:(const char *)arg1 fileSize:(long long)arg2;
- (bool)loadOrCreateIndex;
- (id)timeZoneNameForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

@end
