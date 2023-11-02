
@interface NTKLocalTimelineComplicationController : NTKTimelineComplicationController <CLKCComplicationDataSourceDelegate, CLKUITimeTravel, TLTimelineDelegate> {
    NTKTimelineDataOperation * _currentOperation;
    CLKCComplicationDataSource * _dataSource;
    long long  _dataSourceState;
    NSMutableSet * _delayedBlocks;
    bool  _hasBeenLive;
    bool  _hasQueuedAnimation;
    unsigned long long  _queuedAnimation;
    bool  _supportsTimeTravelForward;
    NSMutableSet * _suspendedRightBoundaryDates;
    CLKComplicationTemplate * _switcherTemplate;
    NSDate * _timeTravelDate;
    TLTimeline * _timeline;
    NSDate * _timelineEndDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLKComplicationTemplate *sharingTemplate;
@property (readonly) Class superclass;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
+ (Class)complicationDataSourceClassForComplication:(id)arg1 family:(long long)arg2 device:(id)arg3;

- (void).cxx_destruct;
- (void)_activate;
- (void)_applyAnimationMode;
- (void)_applyCachingMode;
- (void)_applyUpdatingMode;
- (void)_cancelDelayedBlocks;
- (void)_completeExtendRightOperationWithBoundaryDate:(id)arg1 entries:(id)arg2;
- (void)_completeSetupOperationWithEndDate:(id)arg1 currentEntry:(id)arg2;
- (id)_currentEntry;
- (void)_deactivate;
- (void)_extendTimelineIfNecessaryAndPossible;
- (void)_queueAnimationForNextUpdate:(unsigned long long)arg1;
- (void)_requestDataSourceToUpdateToState:(long long)arg1;
- (void)_resetTimelineForCachingChange;
- (void)_startExtendOperationIfNecessaryForTimeline:(id)arg1 withDate:(id)arg2 minBuffer:(double)arg3;
- (void)_startExtendRightOperationFromDate:(id)arg1;
- (void)_startSetupOperationIfPossible;
- (void)_suspendRightBoundaryDate:(id)arg1;
- (void)_updateAllDisplayWrappersToCurrentTemplateWithReason:(long long)arg1;
- (void)_updateAllDisplayWrappersToCurrentTemplateWithReason:(long long)arg1 animation:(unsigned long long)arg2;
- (void)_updateDimStateForCurrentTimeline;
- (void)_updateDisplayWrapper:(id)arg1 toCurrentTemplateWithReason:(long long)arg2 animation:(unsigned long long)arg3;
- (void)_updateIsComplicationActive:(bool)arg1;
- (id)activeDisplayTemplateForDisplayWrapper:(id)arg1;
- (void)addDisplayWrapper:(id)arg1;
- (id)alwaysOnTemplate;
- (void)appendEntries:(id)arg1;
- (void)appendEntries:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
- (id)complicationApplicationIdentifier;
- (void)didTouchDownInView:(id)arg1;
- (void)didTouchUpInsideView:(id)arg1;
- (void)entriesDidChangeInTimeline:(id)arg1;
- (bool)hasTapAction;
- (id)initWithComplication:(id)arg1 variant:(id)arg2 device:(id)arg3;
- (void)invalidateEntries;
- (void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
- (void)invalidateSwitcherTemplate;
- (id)lockedTemplate;
- (double)minimumIntervalBetweenTimelineEntries;
- (void)performTapActionForDisplayWrapper:(id)arg1;
- (Class)richComplicationDisplayViewClass;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setIgnoreNewTemplates:(bool)arg1;
- (void)setShowsLockedUI:(bool)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (void)setTimelineEndDate:(id)arg1;
- (id)sharingTemplate;
- (void)timeline:(id)arg1 didChangeNowEntryFrom:(id)arg2 to:(id)arg3;

@end
