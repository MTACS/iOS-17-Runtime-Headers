
@interface SMReceiverContact : SMContact {
    long long  _maxLocationsInPhoneCacheTrace;
    long long  _maxLocationsInWatchCacheTrace;
    long long  _maxPhoneCacheSize;
    long long  _maxWatchCacheSize;
    long long  _numCacheDownloads;
    long long  _numSuccessfulCacheDownloads;
    SMCache * _phoneCache;
    SMReceiverSessionStatus * _sessionStatus;
    double  _timeTillCacheRelease;
    double  _timeTillFirstSuccessfulCacheDownload;
    SMCache * _watchCache;
}

@property (nonatomic) long long maxLocationsInPhoneCacheTrace;
@property (nonatomic) long long maxLocationsInWatchCacheTrace;
@property (nonatomic) long long maxPhoneCacheSize;
@property (nonatomic) long long maxWatchCacheSize;
@property (nonatomic) long long numCacheDownloads;
@property (nonatomic) long long numSuccessfulCacheDownloads;
@property (nonatomic, retain) SMCache *phoneCache;
@property (nonatomic, retain) SMReceiverSessionStatus *sessionStatus;
@property (nonatomic) double timeTillCacheRelease;
@property (nonatomic) double timeTillFirstSuccessfulCacheDownload;
@property (nonatomic, retain) SMCache *watchCache;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 syncDate:(id)arg2 phoneCache:(id)arg3 watchCache:(id)arg4 sessionStatus:(id)arg5 allowReadToken:(id)arg6 safetyCacheKey:(id)arg7 shareURL:(id)arg8 participantID:(id)arg9 sharingInvitationData:(id)arg10 numCacheDownloads:(long long)arg11 numSuccessfulCacheDownloads:(long long)arg12 maxPhoneCacheSize:(long long)arg13 maxWatchCacheSize:(long long)arg14 maxLocationsInPhoneCacheTrace:(long long)arg15 maxLocationsInWatchCacheTrace:(long long)arg16 timeTillCacheRelease:(double)arg17 timeTillFirstSuccessfulCacheDownload:(double)arg18 sessionID:(id)arg19;
- (long long)maxLocationsInPhoneCacheTrace;
- (long long)maxLocationsInWatchCacheTrace;
- (long long)maxPhoneCacheSize;
- (long long)maxWatchCacheSize;
- (long long)numCacheDownloads;
- (long long)numSuccessfulCacheDownloads;
- (id)phoneCache;
- (id)sessionStatus;
- (void)setMaxLocationsInPhoneCacheTrace:(long long)arg1;
- (void)setMaxLocationsInWatchCacheTrace:(long long)arg1;
- (void)setMaxPhoneCacheSize:(long long)arg1;
- (void)setMaxWatchCacheSize:(long long)arg1;
- (void)setNumCacheDownloads:(long long)arg1;
- (void)setNumSuccessfulCacheDownloads:(long long)arg1;
- (void)setPhoneCache:(id)arg1;
- (void)setSessionStatus:(id)arg1;
- (void)setTimeTillCacheRelease:(double)arg1;
- (void)setTimeTillFirstSuccessfulCacheDownload:(double)arg1;
- (void)setWatchCache:(id)arg1;
- (double)timeTillCacheRelease;
- (double)timeTillFirstSuccessfulCacheDownload;
- (id)watchCache;

@end
