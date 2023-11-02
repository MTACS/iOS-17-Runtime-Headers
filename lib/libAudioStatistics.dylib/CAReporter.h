
@interface CAReporter : NSObject {
    NSDictionary * _configuration;
    bool  _connected;
    NSMutableDictionary * _internalConfiguration;
    CAReportingPerformanceObject * _perfObject;
    bool  _removedByClient;
    long long  _reporterID;
    unsigned short  _serviceType;
    unsigned long long  _signpostID;
    NSDate * _startDate;
    bool  _started;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property bool connected;
@property (retain) NSMutableDictionary *internalConfiguration;
@property (retain) CAReportingPerformanceObject *perfObject;
@property bool removedByClient;
@property (readonly) long long reporterID;
@property (nonatomic) unsigned short serviceType;
@property (readonly) unsigned long long signpostID;
@property (retain) NSDate *startDate;
@property bool started;

+ (void)sendSingleMessage:(id)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3;

- (void).cxx_destruct;
- (void)cacheServiceType:(unsigned short)arg1;
- (id)configuration;
- (bool)connected;
- (void)dealloc;
- (id)initWithNewReporterID;
- (id)initWithReporterID:(long long)arg1 serviceType:(unsigned short)arg2;
- (id)initWithSessionID:(unsigned int)arg1 serviceType:(unsigned short)arg2;
- (id)internalConfiguration;
- (id)perfObject;
- (bool)removedByClient;
- (long long)reporterID;
- (void)requestMessageForCategory:(unsigned int)arg1 type:(unsigned short)arg2 callback:(id /* block */)arg3;
- (void)sendMessage:(id)arg1 category:(unsigned int)arg2 type:(unsigned short)arg3;
- (unsigned short)serviceType;
- (void)setConfiguration:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setInternalConfiguration:(id)arg1;
- (void)setPerfObject:(id)arg1;
- (void)setRemovedByClient:(bool)arg1;
- (void)setServiceType:(unsigned short)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStarted:(bool)arg1;
- (unsigned long long)signpostID;
- (void)start;
- (id)startDate;
- (bool)started;
- (void)stop;
- (void)updateWithReporterID:(long long)arg1;

@end
