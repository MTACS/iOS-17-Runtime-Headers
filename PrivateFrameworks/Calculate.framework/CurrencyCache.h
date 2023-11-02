
@interface CurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDictionary * _currencyData;
    NSString * _currentCurrency;
    NSNumber * _currentRate;
    NSMutableString * _currentString;
    NSDate * _lastRefreshDate;
    double  _lastRefreshTimeInternal;
    NSLock * _lock;
    NSMutableDictionary * _mutableCurrencyCache;
    double  _refreshInterval;
    NSObject<OS_dispatch_queue> * _serializer;
    double  _timeout;
    unsigned long long  _uuid;
}

@property (nonatomic, retain) NSDictionary *currencyData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastRefreshDate;
@property (nonatomic) double lastRefreshTimeInternal;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, readonly) bool needsRefresh;
@property (nonatomic) double refreshInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serializer;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long uuid;

+ (id)shared;

- (void).cxx_destruct;
- (id)_consumerKey;
- (id)_consumerSecret;
- (void)_loadPersistedCurrencyCache;
- (bool)_needsRefresh;
- (void)_queue_persistCurrencyCache;
- (bool)_queue_refresh;
- (bool)_queue_refresh:(double)arg1;
- (id)createCredential;
- (id)currencyData;
- (id)init;
- (id)lastRefreshDate;
- (double)lastRefreshTimeInternal;
- (id)lock;
- (bool)needsRefresh;
- (bool)refresh;
- (bool)refreshIfNeeded;
- (double)refreshInterval;
- (bool)refreshWithTimeOut:(float)arg1;
- (id)serializer;
- (void)setCurrencyData:(id)arg1;
- (void)setLastRefreshTimeInternal:(double)arg1;
- (void)setLock:(id)arg1;
- (void)setRefreshInterval:(double)arg1;
- (void)setSerializer:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;
- (bool)updateCurrencyCacheWithData:(id)arg1;
- (unsigned long long)uuid;

@end
