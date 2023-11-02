
@interface OSAReport : NSObject {
    double  _capture_time;
    NSString * _etlKey;
    NSString * _incidentID;
    NSString * _logType;
    NSMutableDictionary * _logWritingOptions;
    NSString * _logfile;
    NSMutableArray * _notes;
    NSString * _oldLogFile;
}

@property (nonatomic, readonly) double capture_time;
@property (nonatomic, retain) NSString *etlKey;
@property (nonatomic, readonly) NSString *logfile;
@property (nonatomic, readonly) NSArray *notes;
@property (readonly) NSString *oldLogFile;

+ (id)bootArgs;
+ (unsigned int)codeSigningMonitor;
+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(id /* block */)arg2;
+ (id)findBundleAtPath:(id)arg1 withKeys:(id)arg2 bundleURL:(inout id*)arg3;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(bool)arg1;

- (void).cxx_destruct;
- (id)additionalIPSMetadata;
- (id)appleCareDetails;
- (double)captureTime;
- (double)capture_time;
- (id)etlKey;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)getSyslogForPids:(id)arg1 andOptionalSenders:(id)arg2;
- (id)incidentID;
- (id)init;
- (bool)isActionable;
- (bool)isAppleTV;
- (id)logfile;
- (id)notes;
- (id)oldLogFile;
- (id)problemType;
- (id)reportNamePrefix;
- (bool)saveWithOptions:(id)arg1;
- (void)setEtlKey:(id)arg1;
- (int)streamContentAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)symlink:(id)arg1;

@end
