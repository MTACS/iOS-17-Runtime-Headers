
@interface SBChronoHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {
    SBHIconManager * _iconManager;
    unsigned long long  _widgetDataGeneration;
    CHSWidgetHost * _widgetHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconManager *iconManager;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long widgetDataGeneration;
@property (nonatomic, readonly) CHSWidgetHost *widgetHost;

- (void).cxx_destruct;
- (id)_containerDescriptorForWidgetIcon:(id)arg1 atLocation:(long long)arg2 page:(unsigned long long)arg3;
- (id)_descriptionForArray:(id)arg1 name:(id)arg2;
- (void)_rebuildAndTransmitConfiguredWidgetData:(id)arg1;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserAddedWidgetIconStackSuggestion:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2 withURL:(id)arg3;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconAdded:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconRemoved:(id)arg2;
- (void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2;
- (void)homeScreenUsageAggregatorAddWidgetSheetWillPresent:(id)arg1;
- (id)iconManager;
- (id)init;
- (id)initWithIconManager:(id)arg1;
- (void)setWidgetDataGeneration:(unsigned long long)arg1;
- (unsigned long long)widgetDataGeneration;
- (id)widgetHost;

@end
