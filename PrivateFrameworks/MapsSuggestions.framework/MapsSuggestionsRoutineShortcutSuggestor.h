
@interface MapsSuggestionsRoutineShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor> {
    MapsSuggestionsRoutine * _routine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithRoutine:(id)arg1;
- (BOOL)suggestShortcutsOfType:(long long)arg1 handler:(id /* block */)arg2;

@end
