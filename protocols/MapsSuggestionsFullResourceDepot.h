
@protocol MapsSuggestionsFullResourceDepot <MapsSuggestionsInternalResourceDepot>

@required

- (void)setOneBiome:(MapsSuggestionsBiome *)arg1;
- (void)setOneBiomeConnector:(id <MapsSuggestionsBiomeConnector>)arg1;
- (void)setOneContactActivity:(_TtC15MapsSuggestions30MapsSuggestionsContactActivity *)arg1;
- (void)setOneContacts:(MapsSuggestionsContacts *)arg1;
- (void)setOneContactsConnector:(id <MapsSuggestionsContactsConnector>)arg1;
- (void)setOneEventKit:(MapsSuggestionsEventKit *)arg1;
- (void)setOneEventKitConnector:(id <MapsSuggestionsEventKitConnector>)arg1;
- (void)setOneFavorites:(MapsSuggestionsShortcutManager *)arg1;
- (void)setOneFindMy:(_TtC15MapsSuggestions21MapsSuggestionsFindMy *)arg1;
- (void)setOneFindMyConnector:(id <MapsSuggestionsFindMyConnector>)arg1;
- (void)setOneFlightRequester:(id <MapsSuggestionsFlightRequester>)arg1;
- (void)setOneFlightUpdater:(MapsSuggestionsFlightUpdater *)arg1;
- (void)setOneInsights:(id <MapsSuggestionsInsights>)arg1;
- (void)setOneMapsSync:(MapsSuggestionsMapsSync *)arg1;
- (void)setOneMapsSyncConnector:(id <MapsSuggestionsMapsSyncConnector>)arg1;
- (void)setOneNetworkRequester:(id <MapsSuggestionsNetworkRequester>)arg1;
- (void)setOnePortrait:(MapsSuggestionsPortrait *)arg1;
- (void)setOnePortraitConnector:(id <MapsSuggestionsPortraitConnector>)arg1;
- (void)setOneRoutine:(MapsSuggestionsRoutine *)arg1;
- (void)setOneRoutineConnector:(id <MapsSuggestionsRoutineConnector>)arg1;
- (void)setOneSourceDelegate:(id <MapsSuggestionsSourceDelegate>)arg1;
- (void)setOneUser:(MapsSuggestionsUser *)arg1;
- (void)setOneVirtualGarage:(MapsSuggestionsVirtualGarage *)arg1;
- (void)setOneVirtualGarageConnector:(id <MapsSuggestionsVirtualGarageConnector>)arg1;

@end
