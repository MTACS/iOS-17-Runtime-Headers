
@interface EDSearchableIndexBudgetConfiguration : NSObject <EFPubliclyDescribable> {
    bool  _allowBacklogIndexingOnPower;
    bool  _autoStartMaintenanceIndexing;
    bool  _enableActivityBasedScheduling;
    long long  _numberOfItemsToIndexOnResume;
    double  _periodDuration;
    double  _time;
}

@property (nonatomic) bool allowBacklogIndexingOnPower;
@property (nonatomic) bool autoStartMaintenanceIndexing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic) bool enableActivityBasedScheduling;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfItemsToIndexOnResume;
@property (nonatomic, readonly) double periodDuration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double time;

+ (id)defaultConfiguration;
+ (id)nonSchedulingBudgetConfiguration;

- (bool)allowBacklogIndexingOnPower;
- (bool)autoStartMaintenanceIndexing;
- (id)description;
- (id)ef_publicDescription;
- (bool)enableActivityBasedScheduling;
- (id)init;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3;
- (id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 enableActivityBasedScheduling:(bool)arg4 autoStartMaintenanceIndexing:(bool)arg5 allowBacklogIndexingOnPower:(bool)arg6;
- (long long)numberOfItemsToIndexOnResume;
- (double)periodDuration;
- (void)setAllowBacklogIndexingOnPower:(bool)arg1;
- (void)setAutoStartMaintenanceIndexing:(bool)arg1;
- (void)setEnableActivityBasedScheduling:(bool)arg1;
- (double)time;

@end
