
@interface ICQQuotaRequestManager : NSObject {
    NSMutableDictionary * _appDetailsCache;
    ICQQuotaInfoResponse * _quotaInfo;
    bool  _quotaInfoIsDetailed;
    NSObject<OS_dispatch_queue> * _quota_info_queue;
    NSOperationQueue * _requestQueue;
}

+ (id)noAccountError;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_sendSynchronousAARequest:(id)arg1;
- (id)appDetailsForBundleIDs:(id)arg1 error:(id*)arg2;
- (void)clearCachedAppDetails;
- (void)clearCachedQuotaInfo;
- (void)getAppDetailsForBundleIDs:(id)arg1 handler:(id /* block */)arg2;
- (void)getQuotaInfoDetailed:(bool)arg1 handler:(id /* block */)arg2;
- (id)init;
- (void)noteQuotaInfoChanged;
- (id)quotaInfoDetailed:(bool)arg1 error:(id*)arg2;

@end
