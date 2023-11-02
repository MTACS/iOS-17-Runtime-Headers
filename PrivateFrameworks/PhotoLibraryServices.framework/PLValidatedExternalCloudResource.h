
@interface PLValidatedExternalCloudResource : PLValidatedExternalResource {
    short  _cloudLocalState;
    unsigned long long  _cplType;
    NSString * _fingerprint;
    NSDate * _lastOnDemandDownloadDate;
    NSDate * _lastPrefetchDate;
    NSDate * _masterDateCreated;
    short  _prefetchCount;
    NSDate * _prunedAt;
    short  _remoteAvailability;
    unsigned long long  _sourceCplType;
}

@property (nonatomic) short cloudLocalState;
@property (nonatomic) unsigned long long cplType;
@property (nonatomic, retain) NSString *fingerprint;
@property (nonatomic, retain) NSDate *lastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *lastPrefetchDate;
@property (nonatomic, retain) NSDate *masterDateCreated;
@property (nonatomic) short prefetchCount;
@property (nonatomic, retain) NSDate *prunedAt;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) unsigned long long sourceCplType;

- (void).cxx_destruct;
- (short)cloudLocalState;
- (unsigned long long)cplType;
- (unsigned long long)cplTypeWithAssetID:(id)arg1;
- (id)fingerprint;
- (id)initWithCloudResource:(id)arg1;
- (id)initWithInternalResource:(id)arg1;
- (bool)isEqualToValidatedExternalResource:(id)arg1;
- (id)lastOnDemandDownloadDate;
- (id)lastPrefetchDate;
- (id)masterDateCreated;
- (short)prefetchCount;
- (id)prunedAt;
- (short)remoteAvailability;
- (void)setCloudLocalState:(short)arg1;
- (void)setCplType:(unsigned long long)arg1;
- (void)setFingerprint:(id)arg1;
- (void)setLastOnDemandDownloadDate:(id)arg1;
- (void)setLastPrefetchDate:(id)arg1;
- (void)setMasterDateCreated:(id)arg1;
- (void)setPrefetchCount:(short)arg1;
- (void)setPrunedAt:(id)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setSourceCplType:(unsigned long long)arg1;
- (unsigned long long)sourceCplType;

@end
