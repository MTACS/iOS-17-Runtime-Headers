
@interface GEOTileRequest : NSObject {
    GEOTileKeyMap * _additionalInfos;
    GEOApplicationAuditToken * _auditToken;
    NSString * _backgroundSessionIdentifier;
    GEOTileKeyMap * _cachedData;
    GEOTileKeyMap * _cachedEtags;
    unsigned long long  _constraints;
    GEOTileKeyMap * _createTimes;
    GEOTileKeyList * _keyList;
    unsigned char  _loadReason;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOTileKeyMap * _priorities;
    bool  _shouldParticipateInBalancer;
    GEOTileKeyMap * _signpostIDs;
}

@property (nonatomic, readonly) GEOTileKeyMap *additionalInfos;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) NSString *backgroundSessionIdentifier;
@property (nonatomic, readonly) GEOTileKeyMap *cachedData;
@property (nonatomic, readonly) GEOTileKeyMap *cachedEtags;
@property (nonatomic, readonly) unsigned long long constraints;
@property (nonatomic, readonly) GEOTileKeyMap *createTimes;
@property (nonatomic, readonly) GEOTileKeyList *keyList;
@property (nonatomic, readonly) unsigned char loadReason;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic, readonly) GEOTileKeyMap *priorities;
@property (nonatomic, readonly) bool shouldParticipateInBalancer;
@property (nonatomic, readonly) GEOTileKeyMap *signpostIDs;

- (void).cxx_destruct;
- (id)additionalInfos;
- (id)auditToken;
- (id)backgroundSessionIdentifier;
- (id)cachedData;
- (id)cachedEtags;
- (unsigned long long)constraints;
- (id)createTimes;
- (id)description;
- (id)init;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3;
- (id)initWithKeyList:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 cachedEtags:(id)arg4 cachedData:(id)arg5 priorities:(id)arg6 signpostIDs:(id)arg7 createTimes:(id)arg8 additionalInfos:(id)arg9 auditToken:(id)arg10 constraints:(unsigned long long)arg11 backgroundSessionIdentifier:(id)arg12 shouldParticipateInBalancer:(bool)arg13 reason:(unsigned char)arg14;
- (id)keyList;
- (unsigned char)loadReason;
- (id)locale;
- (id)manifestConfiguration;
- (id)priorities;
- (bool)shouldParticipateInBalancer;
- (id)signpostIDs;

@end
