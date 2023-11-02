
@interface DTOSLogLoaderConfiguration : NSObject {
    unsigned long long  _columnInclusions;
    NSArray * _dynamicTracingEnabledSubsystems;
    bool  _enableBacktraceReplacement;
    NSPredicate * _filterPredicate;
    NSDate * _importForcedEndDate;
    NSDate * _importForcedStartDate;
    NSURL * _importedFileURL;
    unsigned long long  _loaderExclusions;
    NSDictionary * _logSubsystemCategoryPairsToEnable;
    unsigned long long  _machContinuousStart;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _machTimebase;
    unsigned long long  _mode;
    unsigned long long  _signpostConfig;
    NSDictionary * _signpostSubsystemCategoryPairsToEnable;
    bool  _trackPidToExecNameMapping;
}

@property (nonatomic, readonly) unsigned long long columnInclusions;
@property (nonatomic, readonly) NSArray *dynamicTracingEnabledSubsystems;
@property (nonatomic, readonly) bool enableBacktraceReplacement;
@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (nonatomic, readonly) NSDate *importForcedEndDate;
@property (nonatomic, readonly) NSDate *importForcedStartDate;
@property (nonatomic, readonly) NSURL *importedFileURL;
@property (nonatomic, readonly) unsigned long long loaderExclusions;
@property (nonatomic, readonly) NSDictionary *logSubsystemCategoryPairsToEnable;
@property (nonatomic, readonly) unsigned long long machContinuousStart;
@property (nonatomic, readonly) struct mach_timebase_info { unsigned int x1; unsigned int x2; } machTimebase;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) unsigned long long signpostConfig;
@property (nonatomic, readonly) NSDictionary *signpostSubsystemCategoryPairsToEnable;
@property (nonatomic, readonly) bool trackPidToExecNameMapping;

- (void).cxx_destruct;
- (unsigned long long)columnInclusions;
- (id)dynamicTracingEnabledSubsystems;
- (bool)enableBacktraceReplacement;
- (id)filterPredicate;
- (id)importForcedEndDate;
- (id)importForcedStartDate;
- (id)importedFileURL;
- (id)initWithFilterPredicate:(id)arg1 signpostConfig:(unsigned long long)arg2 loaderExclusions:(unsigned long long)arg3 columnInclusions:(unsigned long long)arg4 mode:(unsigned long long)arg5 enableBacktraceReplacement:(bool)arg6 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg7 machContinuousStart:(unsigned long long)arg8 importedFileURL:(id)arg9 importForcedStartDate:(id)arg10 importForcedEndDate:(id)arg11 trackPidToExecNameMapping:(bool)arg12 dynamicTracingEnabledSubsystems:(id)arg13 logSubsystemCategoryPairsToEnable:(id)arg14 signpostSubsystemCategoryPairsToEnable:(id)arg15;
- (unsigned long long)loaderExclusions;
- (id)logSubsystemCategoryPairsToEnable;
- (unsigned long long)machContinuousStart;
- (struct mach_timebase_info { unsigned int x1; unsigned int x2; })machTimebase;
- (unsigned long long)mode;
- (void)setFilterPredicate:(id)arg1;
- (unsigned long long)signpostConfig;
- (id)signpostSubsystemCategoryPairsToEnable;
- (bool)trackPidToExecNameMapping;

@end
