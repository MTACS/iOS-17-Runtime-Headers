
@interface PowerUIDesktopModePredictor : NSObject <PowerUIPredictor> {
    <_CDLocalContext> * _context;
    NSString * _defaultsDomain;
    double  _desktopEntryThreshold;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadModelLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    MLModel * _model;
    double  _pluginBatteryLevel;
    NSDate * _pluginDate;
    <_DKKnowledgeQuerying> * _store;
    double  _threshold;
    PowerUITrialManager * _trialManager;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (nonatomic, retain) NSString *defaultsDomain;
@property (nonatomic) double desktopEntryThreshold;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } loadModelLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly, retain) MLModel *model;
@property (nonatomic) double pluginBatteryLevel;
@property (nonatomic, retain) NSDate *pluginDate;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;
@property (nonatomic) double threshold;
@property (nonatomic, retain) PowerUITrialManager *trialManager;

- (void).cxx_destruct;
- (id)context;
- (id)defaultsDomain;
- (double)desktopEntryThreshold;
- (id)initWithDefaultsDomain:(id)arg1 withContextStore:(id)arg2 withKnowledgeStore:(id)arg3 withTrialManager:(id)arg4;
- (struct os_unfair_lock_s { unsigned int x1; })loadModelLock;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)log;
- (id)model;
- (unsigned long long)modelVersion;
- (double)pluginBatteryLevel;
- (id)pluginDate;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1;
- (unsigned long long)predictorType;
- (void)setContext:(id)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setDesktopEntryThreshold:(double)arg1;
- (void)setLoadModelLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLog:(id)arg1;
- (void)setPluginBatteryLevel:(double)arg1;
- (void)setPluginDate:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setThreshold:(double)arg1;
- (void)setTrialManager:(id)arg1;
- (id)store;
- (double)threshold;
- (id)trialManager;

@end
