
@interface OSACrackShotReport : OSAStackShotReport {
    NSString * _bundleID;
    int  _cpuType;
    bool  _isSnapshotDisabled;
    bool  _isSystemWatchdog;
    NSString * _procPath;
    NSDictionary * _spindump;
    NSDictionary * _termination_info;
}

@property (readonly) bool isSnapshotDisabled;
@property (nonatomic, retain) NSDictionary *spindump;

- (void).cxx_destruct;
- (id)additionalIPSMetadata;
- (id)decode_cpuType;
- (id)decode_reason:(struct exit_reason_snapshot { unsigned int x1; unsigned long long x2; unsigned long long x3; }*)arg1 reason:(id)arg2;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initForPid:(int)arg1 exitSnapshot:(struct exit_reason_snapshot { unsigned int x1; unsigned long long x2; unsigned long long x3; }*)arg2 reason:(id)arg3;
- (id)initWithPid:(int)arg1 procName:(id)arg2 bundleID:(id)arg3 exitSnapshot:(struct exit_reason_snapshot { unsigned int x1; unsigned long long x2; unsigned long long x3; }*)arg4 reason:(id)arg5;
- (bool)isSnapshotDisabled;
- (id)problemType;
- (id)reportNamePrefix;
- (bool)saveWithOptions:(id)arg1;
- (void)setSpindump:(id)arg1;
- (id)spindump;

@end
