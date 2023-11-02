
@interface HKOverlayRoomStackedContext : NSObject <HKOverlayContext, HKOverlayStackedContext> {
    HKOverlayRoomApplicationItems * _applicationItems;
    NSCalendar * _currentCalendar;
    long long  _currentTimeScope;
    HKInteractiveChartDisplayType * _displayType;
    bool  _isInfoButtonHidden;
    HKDisplayTypeContextItem * _lastUpdatedItem;
    HKDisplayType * _overlayDisplayType;
    HKSampleType * _sampleType;
    HKInteractiveChartDisplayType * _stackedBaseDisplayType;
    HKSampleType * _stackedSampleType;
    HKDisplayType * _stackedTemplateDisplayType;
    HKDisplayType * _templateDisplayType;
}

@property (nonatomic, readonly) HKOverlayRoomApplicationItems *applicationItems;
@property (nonatomic, retain) NSCalendar *currentCalendar;
@property (nonatomic) long long currentTimeScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInfoButtonHidden;
@property (nonatomic, retain) HKDisplayTypeContextItem *lastUpdatedItem;
@property (nonatomic, readonly) HKDisplayType *overlayDisplayType;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *stackedBaseDisplayType;
@property (nonatomic, readonly) HKSampleType *stackedSampleType;
@property (nonatomic, retain) HKDisplayType *stackedTemplateDisplayType;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKDisplayType *templateDisplayType;

+ (id)generateCustomSeriesWithTemplateDisplayType:(id)arg1 sampleType:(id)arg2 applicationItems:(id)arg3 currentTimeScope:(long long)arg4;

- (void).cxx_destruct;
- (id)_canonicalUnitOverrideForDisplayType:(id)arg1;
- (id)_contextItemTitleForDisplayType:(id)arg1 timeScope:(long long)arg2;
- (id)_generateDisplayTypeForTemplateDisplayType:(id)arg1 sampleType:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 currentTimeScope:(long long)arg5 currentCalendar:(id)arg6;
- (id)_generateNamedDataSourceForTemplateDisplayType:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3 currentTimeScope:(long long)arg4 currentCalendar:(id)arg5;
- (bool)_obsoleteDateRange:(id)arg1 overlayController:(id)arg2;
- (id)applicationItems;
- (id)baseDisplayTypeForOverlay:(long long)arg1;
- (id)buildContextItemWithValue:(id)arg1 unit:(id)arg2 valueContext:(id)arg3 forTimeScope:(long long)arg4;
- (bool)canSelectOverlayContextItem:(id)arg1 isDeselecting:(bool)arg2 timeScope:(long long)arg3 chartController:(id)arg4;
- (id)contextItemForLastUpdate;
- (id)currentCalendar;
- (long long)currentTimeScope;
- (id)displayType;
- (id)initWithDisplayType:(id)arg1 overlayDisplayType:(id)arg2 stackedDisplayType:(id)arg3 overlayChartController:(id)arg4 currentCalendarOverride:(id)arg5 applicationItems:(id)arg6 isInfoButtonHidden:(bool)arg7;
- (id)initWithDisplayType:(id)arg1 overlayDisplayType:(id)arg2 stackedSampleType:(id)arg3 overlayChartController:(id)arg4 currentCalendarOverride:(id)arg5 applicationItems:(id)arg6 isInfoButtonHidden:(bool)arg7;
- (id)initWithDisplayType:(id)arg1 templateDisplayType:(id)arg2 sampleType:(id)arg3 overlayDisplayType:(id)arg4 stackedDisplayType:(id)arg5 stackedTemplateDisplayType:(id)arg6 stackedSampleType:(id)arg7 overlayChartController:(id)arg8 currentTimeScope:(long long)arg9 currentCalendar:(id)arg10 applicationItems:(id)arg11 isInfoButtonHidden:(bool)arg12;
- (id)initWithSampleType:(id)arg1 overlayDisplayType:(id)arg2 stackedDisplayType:(id)arg3 overlayChartController:(id)arg4 currentCalendarOverride:(id)arg5 applicationItems:(id)arg6 isInfoButtonHidden:(bool)arg7;
- (id)initWithSampleType:(id)arg1 overlayDisplayType:(id)arg2 stackedSampleType:(id)arg3 overlayChartController:(id)arg4 currentCalendarOverride:(id)arg5 applicationItems:(id)arg6 isInfoButtonHidden:(bool)arg7;
- (bool)isInfoButtonHidden;
- (id)lastUpdatedItem;
- (id)overlayDisplayType;
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;
- (long long)resolutionForTimeScope:(long long)arg1 traitResolution:(long long)arg2;
- (id)sampleType;
- (id)sampleTypeForDateRangeUpdates;
- (void)setCurrentCalendar:(id)arg1;
- (void)setCurrentTimeScope:(long long)arg1;
- (void)setIsInfoButtonHidden:(bool)arg1;
- (void)setLastUpdatedItem:(id)arg1;
- (void)setStackedTemplateDisplayType:(id)arg1;
- (void)setTemplateDisplayType:(id)arg1;
- (id)stackedBaseDisplayType;
- (id)stackedBaseDisplayTypeForOverlay:(long long)arg1;
- (id)stackedOverlayDisplayTypeForTimeScope:(long long)arg1;
- (id)stackedSampleType;
- (id)stackedSampleTypeForDateRangeUpdates;
- (id)stackedTemplateDisplayType;
- (id)templateDisplayType;
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 resolution:(long long)arg4 completion:(id /* block */)arg5;

@end
