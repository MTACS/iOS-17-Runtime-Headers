
@interface BLSHWatchdogDidFireDetails : NSObject {
    NSString * _abortReasonString;
    NSString * _buildVersion;
    NSDate * _date;
    bool  _debugLogsEnabled;
    NSString * _device;
    NSString * _explanation;
}

@property (nonatomic, copy) NSString *abortReasonString;
@property (nonatomic, copy) NSString *buildVersion;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) bool debugLogsEnabled;
@property (nonatomic, copy) NSString *device;
@property (nonatomic, copy) NSString *explanation;

- (void).cxx_destruct;
- (id)abortReasonString;
- (id)buildVersion;
- (id)date;
- (bool)debugLogsEnabled;
- (id)device;
- (id)explanation;
- (id)initWithWatchdogDidFireDictionary:(id)arg1;
- (void)setAbortReasonString:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDebugLogsEnabled:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setExplanation:(id)arg1;

@end
