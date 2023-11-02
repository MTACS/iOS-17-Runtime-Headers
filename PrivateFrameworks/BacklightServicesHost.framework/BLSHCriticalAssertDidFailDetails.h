
@interface BLSHCriticalAssertDidFailDetails : NSObject {
    NSString * _buildVersion;
    NSDate * _date;
    bool  _debugLogsEnabled;
    NSString * _device;
    NSString * _explanation;
    NSString * _processName;
}

@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool debugLogsEnabled;
@property (nonatomic, copy) NSString *device;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, copy) NSString *processName;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)date;
- (bool)debugLogsEnabled;
- (id)device;
- (id)explanation;
- (id)initWithCriticalAssertDidFailDictionary:(id)arg1;
- (id)processName;
- (void)setBuildVersion:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDebugLogsEnabled:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setExplanation:(id)arg1;
- (void)setProcessName:(id)arg1;

@end
