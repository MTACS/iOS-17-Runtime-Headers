
@interface CLSRegionItemCacheCreator : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    unsigned long long  _numberOfRetries;
    NSArray * _queryPerformers;
    bool  _simulatesTimeout;
    double  _timeoutInterval;
}

@property (nonatomic, retain) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) unsigned long long numberOfRetries;
@property (nonatomic, readonly) NSArray *queryPerformers;
@property (getter=isSimulatingTimeout, nonatomic) bool simulatesTimeout;
@property (nonatomic) double timeoutInterval;

+ (id)businessItemsForRegion:(id)arg1;

- (void).cxx_destruct;
- (bool)createCacheForRegions:(id)arg1 progressBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)initWithQueryPerformers:(id)arg1;
- (bool)isSimulatingTimeout;
- (id)loggingConnection;
- (unsigned long long)numberOfRetries;
- (id)queryPerformers;
- (void)setLoggingConnection:(id)arg1;
- (void)setNumberOfRetries:(unsigned long long)arg1;
- (void)setSimulatesTimeout:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
