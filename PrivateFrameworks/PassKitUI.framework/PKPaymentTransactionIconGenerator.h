
@interface PKPaymentTransactionIconGenerator : NSObject {
    PKObjectDownloader * _fileDownloader;
    bool  _hasNetworkAccess;
    NSMutableOrderedSet * _highPriorityIconRequests;
    NSMutableDictionary * _iconCache;
    NSMutableArray * _iconCacheKeys;
    NSMutableArray * _inflightRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockRequests;
    NSMutableOrderedSet * _lowPriorityIconRequests;
    PKPaymentService * _paymentService;
    bool  _processingRequest;
    NSObject<OS_dispatch_queue> * _queueIcons;
    double  _scale;
    bool  _useCache;
}

- (void).cxx_destruct;
- (id)_cacheImageFromDownloaderCacheForURL:(id)arg1;
- (void)_downloadLogoForURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_iconCacheKeyForApp:(long long)arg1 bundleIdentifier:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)_iconCacheKeyForMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 imageOut:(id*)arg4;
- (id)_iconCacheKeyForPayLaterMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 imageOut:(id*)arg4;
- (id)_iconCacheKeyForPaymentTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 imageOut:(id*)arg4;
- (void)_iconForApplication:(long long)arg1 applicationIdentifier:(id)arg2 requestToProcess:(id)arg3 iconHandler:(id /* block */)arg4;
- (id)_iconForCacheKey:(id)arg1;
- (void)_iconForReleasedData:(id)arg1 requestToProcess:(id)arg2 iconHandler:(id /* block */)arg3;
- (id)_iconForTransaction:(id)arg1 merchant:(id)arg2 payLaterMerchant:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 ignoreLogoURL:(bool)arg5 requestType:(unsigned long long)arg6 iconHandler:(id /* block */)arg7;
- (id)fileDownloader;
- (id)iconCacheKeyForTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)iconForMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 requestType:(unsigned long long)arg4 iconHandler:(id /* block */)arg5;
- (id)iconForPayLaterMerchant:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 requestType:(unsigned long long)arg4 iconHandler:(id /* block */)arg5;
- (id)iconForTransaction:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 ignoreLogoURL:(bool)arg3 requestType:(unsigned long long)arg4 iconHandler:(id /* block */)arg5;
- (id)initWithCache:(bool)arg1 scale:(double)arg2;
- (void)queue_processNextIconRequest;

@end
