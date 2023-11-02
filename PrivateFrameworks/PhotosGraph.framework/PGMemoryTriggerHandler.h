
@interface PGMemoryTriggerHandler : NSObject <PGMemoryPlannerFutureSource> {
    NSArray * _allMemoryTriggers;
    CLSHolidayCalendarEventService * _holidayService;
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLSHolidayCalendarEventService *holidayService;
@property (readonly) Class superclass;

+ (id)creationDateWithContext:(id)arg1;
+ (id)fallbackTriggeredMemoriesWithContext:(id)arg1 excludingTriggeredMemories:(id)arg2 inGraph:(id)arg3 holidayService:(id)arg4;
+ (unsigned long long)maximumValidityPeriodForValidityIntervalByTriggerType:(id)arg1 context:(id)arg2;
+ (id)memoryNodesAllowedToBeFallbackFromMemoryNodes:(id)arg1 withContext:(id)arg2 inGraph:(id)arg3 holidayService:(id)arg4;
+ (id)personMemoryNodesFeaturingMeNodeInGraph:(id)arg1;
+ (double)scoreForTriggerType:(unsigned long long)arg1;
+ (double)triggerScoreForTriggeredMemory:(id)arg1;

- (void).cxx_destruct;
- (id)allTriggeredMemoriesWithContext:(id)arg1 forTriggerType:(unsigned long long)arg2 inGraph:(id)arg3 progressReporter:(id)arg4;
- (id)allTriggeredMemoriesWithContext:(id)arg1 inGraph:(id)arg2 progressReporter:(id)arg3;
- (id)futureMemoriesForConfiguration:(id)arg1 withGraph:(id)arg2 progressReporter:(id)arg3;
- (id)holidayService;
- (id)initWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2 momentNodesWithBlockedFeatureCache:(id)arg3;
- (id)relevantFeatureNodesInFeatureNodes:(id)arg1 forTriggerType:(unsigned long long)arg2;

@end
