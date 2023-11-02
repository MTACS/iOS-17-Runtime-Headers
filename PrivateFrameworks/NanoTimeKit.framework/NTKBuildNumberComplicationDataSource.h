
@interface NTKBuildNumberComplicationDataSource : NTKComplicationDataSource

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (id)_currentTimelineEntry;
- (id)currentSwitcherTemplate;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;

@end
