
@interface WFWeatherStoreServiceConfiguration : NSObject <NSCopying, NSURLSessionTaskDelegate> {
    Class  _cacheClass;
    NSURL * _cacheURL;
    NSURL * _serviceConnectivityEvaluationURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serviceConnectivityEvaluationURLLock;
    NWPathEvaluator * _serviceConnectivityEvaluator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serviceConnectivityEvaluatorLock;
    NSURLSession * _session;
    WFSettingsManager * _settingsManager;
}

@property (nonatomic, readonly) NSString *apiVersion;
@property (nonatomic, retain) Class cacheClass;
@property (nonatomic, copy) NSURL *cacheURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isServiceAvailable;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, retain) NSURL *serviceConnectivityEvaluationURL;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } serviceConnectivityEvaluationURLLock;
@property (nonatomic, readonly) NWPathEvaluator *serviceConnectivityEvaluator;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } serviceConnectivityEvaluatorLock;
@property (nonatomic, retain) NSURLSession *session;
@property (nonatomic, retain) WFSettingsManager *settingsManager;
@property (readonly) Class superclass;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationWithSourceBundleIdentifier:(id)arg1;
+ (id)generateUserAgent;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)apiConfiguration;
- (id)apiConfigurationForAPIVersion:(id)arg1;
- (id)apiVersion;
- (id)aqiScaleRequestForScaleNamed:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (Class)cacheClass;
- (id)cacheURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 apiVersion:(id)arg4 error:(id*)arg5;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 date:(id)arg3 error:(id*)arg4;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 apiVersion:(id)arg5 error:(id*)arg6;
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 apiVersion:(id)arg5 error:(id*)arg6 requestOptions:(id)arg7;
- (id)init;
- (void)invalidate;
- (bool)isServiceAvailable;
- (bool)isServiceAvailableSync;
- (bool)isValid;
- (id)parseAQIScaleNamed:(id)arg1 data:(id)arg2 apiVersion:(id)arg3 error:(id*)arg4;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 apiVersion:(id)arg7 error:(id*)arg8;
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id*)arg7;
- (id)serviceConnectivityEvaluationURL;
- (struct os_unfair_lock_s { unsigned int x1; })serviceConnectivityEvaluationURLLock;
- (id)serviceConnectivityEvaluator;
- (struct os_unfair_lock_s { unsigned int x1; })serviceConnectivityEvaluatorLock;
- (id)session;
- (void)setCacheClass:(Class)arg1;
- (void)setCacheURL:(id)arg1;
- (void)setServiceConnectivityEvaluationURL:(id)arg1;
- (void)setServiceConnectivityEvaluationURLLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setServiceConnectivityEvaluatorLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSession:(id)arg1;
- (void)setSettingsManager:(id)arg1;
- (id)settingsManager;

@end
