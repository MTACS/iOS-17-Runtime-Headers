
@interface MOSplunkLogger : NSObject <NSURLSessionDelegate> {
    bool  _allowInvalidCert;
    NSURL * _configurationURL;
    NSMutableArray * _events;
    double  _lastSuccessfulConfigurationLoad;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _samplingPercentage;
    NSString * _splunkTopic;
    NSURL * _splunkUploadURL;
    NSString * _version;
}

@property (nonatomic) bool allowInvalidCert;
@property (nonatomic, retain) NSURL *configurationURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *events;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastSuccessfulConfigurationLoad;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSNumber *samplingPercentage;
@property (nonatomic, retain) NSString *splunkTopic;
@property (nonatomic, retain) NSURL *splunkUploadURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_onQueue_loadConfiguration;
- (bool)allowInvalidCert;
- (id)configurationURL;
- (id)events;
- (id)initWithName:(id)arg1 configurationURL:(id)arg2 splunkTopic:(id)arg3 version:(id)arg4 allowInvalidCert:(bool)arg5;
- (double)lastSuccessfulConfigurationLoad;
- (void)logEventNamed:(id)arg1 value:(id)arg2;
- (id)path;
- (id)queue;
- (id)samplingPercentage;
- (void)setAllowInvalidCert:(bool)arg1;
- (void)setConfigurationURL:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setLastSuccessfulConfigurationLoad:(double)arg1;
- (void)setPath:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSamplingPercentage:(id)arg1;
- (void)setSplunkTopic:(id)arg1;
- (void)setSplunkUploadURL:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)splunkTopic;
- (id)splunkUploadURL;
- (void)uploadEventsWithCompletion:(id /* block */)arg1;
- (id)version;

@end
