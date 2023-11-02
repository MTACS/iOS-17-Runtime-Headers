
@interface NTKCGreenfieldPlaceholderComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTimelineEntry * _cachedTimelineEntry;
    NTKGreenfieldPlaceholderComplication * _placeholderComplication;
}

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_currentTimelineEntry;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)pause;
- (void)resume;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;

@end
