
@interface GEOTileServerLocalProxyBatchContext : NSObject {
    GEOTileKeyList * _cacheMissNoDataList;
    GEOTileKeyList * _cacheMissStaleDataList;
    GEOTileKeyList * _cacheMissStaleUnusableDataList;
    GEOTileKeyList * _fullList;
    GEOTileKeyList * _interestList;
    unsigned char  _loadReason;
    GEOTileKeyList * _pendingRequesterList;
    bool  _proactivelyLoadOnFailure;
    GEOTileKeyList * _requesterList;
    GEOTileRequester * _tileRequester;
}

@property (nonatomic, retain) GEOTileKeyList *cacheMissNoDataList;
@property (nonatomic, retain) GEOTileKeyList *cacheMissStaleDataList;
@property (nonatomic, retain) GEOTileKeyList *cacheMissStaleUnusableDataList;
@property (nonatomic, retain) GEOTileKeyList *fullList;
@property (nonatomic, retain) GEOTileKeyList *interestList;
@property (nonatomic) unsigned char loadReason;
@property (nonatomic, retain) GEOTileKeyList *pendingRequesterList;
@property (nonatomic) bool proactivelyLoadOnFailure;
@property (nonatomic, retain) GEOTileKeyList *requesterList;
@property (nonatomic, retain) GEOTileRequester *tileRequester;

- (void).cxx_destruct;
- (id)cacheMissNoDataList;
- (id)cacheMissStaleDataList;
- (id)cacheMissStaleUnusableDataList;
- (id)fullList;
- (id)interestList;
- (unsigned char)loadReason;
- (id)pendingRequesterList;
- (bool)proactivelyLoadOnFailure;
- (id)requesterList;
- (void)setCacheMissNoDataList:(id)arg1;
- (void)setCacheMissStaleDataList:(id)arg1;
- (void)setCacheMissStaleUnusableDataList:(id)arg1;
- (void)setFullList:(id)arg1;
- (void)setInterestList:(id)arg1;
- (void)setLoadReason:(unsigned char)arg1;
- (void)setPendingRequesterList:(id)arg1;
- (void)setProactivelyLoadOnFailure:(bool)arg1;
- (void)setRequesterList:(id)arg1;
- (void)setTileRequester:(id)arg1;
- (id)tileRequester;

@end
