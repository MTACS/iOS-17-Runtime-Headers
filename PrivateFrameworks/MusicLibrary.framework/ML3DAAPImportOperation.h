
@interface ML3DAAPImportOperation : ML3ImportOperation {
    struct shared_ptr<DAAPParserDelegate> { 
        struct DAAPParserDelegate {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _delegate;
    NSError * _importError;
    void * _importSession;
    bool  _importSessionStarted;
    long long  _processedAlbumCount;
    long long  _processedArtistCount;
    long long  _processedContainerCount;
    long long  _processedTrackCount;
    int  _sourceType;
    long long  _totalAlbumCount;
    long long  _totalArtistCount;
    long long  _totalContainerCount;
    long long  _totalTrackCount;
    unsigned char  _updateType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_finishParsingWithError:(id)arg1;
- (int)_getTrackSource;
- (bool)_importDAAPPayloadFromFile:(id)arg1 entityType:(int)arg2;
- (bool)_importDAAPPayloadFromFile:(id)arg1 shouldProcessPlaylists:(bool)arg2;
- (bool)_preprocessDAAPPayloadFromFile:(id)arg1 entityType:(int)arg2;
- (bool)_processAlbumArtistFromArtistElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_processAlbumCount:(int)arg1;
- (bool)_processAlbumFromAlbumElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_processAlbumFromTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 importItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })arg2 albumArtistPersistentID:(long long)arg3;
- (bool)_processArtistCount:(int)arg1;
- (bool)_processArtistFromTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 importItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })arg2 albumArtistPersistentID:(long long*)arg3;
- (bool)_processContainerElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x1; long long *x2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_1_1; } x3; })arg2 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x1; void *x2; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x_3_1_1; } x3; })arg3;
- (bool)_processContainerItemCount:(int)arg1;
- (bool)_processDeletedAlbumId:(const void*)arg1;
- (bool)_processDeletedArtistId:(const void*)arg1;
- (bool)_processDeletedContainerId:(long long)arg1;
- (bool)_processDeletedTrackId:(long long)arg1;
- (bool)_processPersonElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_processTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_processTrackImportItem:(struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_processTrackItemCount:(int)arg1;
- (bool)_processUpdateType:(unsigned char)arg1;
- (bool)_startImportSessionIfNeeded;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })_trackImportItemWithTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })albumArtistImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<ML3DAAPDeleteImportItem> { struct ML3DAAPDeleteImportItem {} *x1; struct __shared_weak_count {} *x2; })albumArtistItemFromDeletedDAAPArtistEntity:(const void*)arg1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })albumImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })albumImportItemFromDAAPTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<ML3DAAPDeleteImportItem> { struct ML3DAAPDeleteImportItem {} *x1; struct __shared_weak_count {} *x2; })albumItemFromDeletedDAAPAlbumEntity:(const void*)arg1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })artistImportItemFromDAAPTrackElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 artistEntityType:(long long)arg2;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })containerImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1 withTrackIds:(struct vector<long long, std::allocator<long long>> { long long *x1; long long *x2; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x_3_1_1; } x3; })arg2 trackPersonIdentifiers:(struct vector<std::unordered_set<std::string>, std::allocator<std::unordered_set<std::string>>> { void *x1; void *x2; struct __compressed_pair<std::unordered_set<std::string> *, std::allocator<std::unordered_set<std::string>>> { void *x_3_1_1; } x3; })arg3;
- (void)dealloc;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)performImportOfSourceType:(int)arg1 usingConnection:(id)arg2;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })personImportItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)updateImportProgress:(float)arg1;

@end
