
@interface MapsSuggestionsShortcutTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsDistanceTitleFormatter, MapsSuggestionsETATitleFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)formatTitlesForEntry:(id)arg1 distance:(double)arg2 trafficString:(id)arg3;
- (bool)formatTitlesForEntry:(id)arg1 eta:(id)arg2;

@end
