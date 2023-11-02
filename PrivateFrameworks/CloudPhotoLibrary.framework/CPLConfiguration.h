
@interface CPLConfiguration : NSObject {
    NSDictionary * _configuration;
    NSURL * _configurationFileURL;
    NSURLSession * _currentSession;
    NSDate * _lastUpdate;
    NSObject<OS_dispatch_queue> * _lock;
    double  _minUpdateInterval;
    double  _updateInterval;
    NSString * _updateIntervalKey;
}

+ (void)disableConfigurationFetching;

- (void).cxx_destruct;
- (void)_load;
- (void)_save;
- (void)_setContents:(id)arg1;
- (double)_updateInterval;
- (void)check;
- (id)initWithClientLibraryBaseURL:(id)arg1;
- (id)initWithClientLibraryBaseURL:(id)arg1 minUpdateInterval:(double)arg2 updateIntervalKey:(id)arg3;
- (void)invalidate;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)refetchFromDisk;
- (id)valueForKey:(id)arg1;

@end
