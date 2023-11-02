
@interface _GDSServerConnection : NSObject <NSURLSessionDelegate> {
    NSDate * _configFetchDate;
    double  _configVersion;
    NSUserDefaults * _defaults;
    bool  _isCASupported;
    bool  _isCECSupported;
    NSObject<OS_os_log> * _log;
    NSString * _serverURL;
}

@property (nonatomic, retain) NSDate *configFetchDate;
@property (nonatomic) double configVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCASupported;
@property (nonatomic) bool isCECSupported;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSString *serverURL;
@property (readonly) Class superclass;

+ (id)dateFormatter;
+ (id)dateFromString:(id)arg1;
+ (id)dateStringFromDate:(id)arg1;
+ (id)fetchConfigWithError:(id*)arg1;
+ (id)osBuildVersion;
+ (id)platform;
+ (id)queryItemsMetaParams;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)checkServerConfiguration;
- (id)configFetchDate;
- (double)configVersion;
- (id)dataFromLocation:(id)arg1;
- (id)defaults;
- (id)fetchBalancingAuthorityFromLocation:(id)arg1;
- (id)fetchBalancingAuthorityPolygons;
- (id)fetchCarbonIntensityHistoryForBA:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)fetchMarginalEmissionForecastFor:(id)arg1;
- (id)getFakeSecret;
- (id)getFakeSecretVersion;
- (id)getFakeServerURL;
- (id)getRequestForEndpoint:(id)arg1 withData:(id)arg2 keySequence:(id)arg3;
- (void)handleNewConfig:(id)arg1;
- (id)init;
- (bool)isCASupported;
- (bool)isCECSupported;
- (void)loadConfigState;
- (id)log;
- (id)postRequestForEndpoint:(id)arg1 withData:(id)arg2;
- (id)serverURL;
- (void)setConfigFetchDate:(id)arg1;
- (void)setConfigVersion:(double)arg1;
- (void)setDefaults:(id)arg1;
- (void)setIsCASupported:(bool)arg1;
- (void)setIsCECSupported:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setServerURL:(id)arg1;

@end
