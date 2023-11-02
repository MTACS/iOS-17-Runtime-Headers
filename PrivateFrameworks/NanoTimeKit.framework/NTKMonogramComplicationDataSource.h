
@interface NTKMonogramComplicationDataSource : NTKComplicationDataSource {
    NTKMonogramTimelineEntryModel * _currentEntry;
    bool  _listeningForMonogramNotifications;
    NSString * _monogramText;
}

+ (bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_currentTimelineEntry;
- (void)_handleMonogramTextReload;
- (void)_reloadMonogramText;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (void)pause;
- (void)resume;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;
- (void)startListeningForMonogramNotifications;
- (void)stopListeningForMonogramNotifications;
- (bool)supportsTapAction;

@end
