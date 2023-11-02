
@interface GEOMapDataSubscriptionUpdateSession : GEOMapDataSubscriptionDownloadGroup {
    NSDictionary * _offlineDataVersions;
    long long  _updateType;
}

@property (nonatomic, copy) NSDictionary *offlineDataVersions;
@property (nonatomic, readonly) long long updateType;

- (void).cxx_destruct;
- (id)initWithSubscriptions:(id)arg1 downloadMode:(unsigned long long)arg2 updateType:(long long)arg3 xpcActivity:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)offlineDataVersions;
- (void)setOfflineDataVersions:(id)arg1;
- (long long)updateType;

@end
