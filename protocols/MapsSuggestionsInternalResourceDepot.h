
@protocol MapsSuggestionsInternalResourceDepot <MapsSuggestionsResourceDepot>

@required

- (<MapsSuggestionsBiomeConnector> *)oneBiomeConnector;
- (<MapsSuggestionsContactsConnector> *)oneContactsConnector;
- (<MapsSuggestionsEventKitConnector> *)oneEventKitConnector;
- (<MapsSuggestionsShortcutStorage> *)oneFavoritesStorage;
- (<MapsSuggestionsShortcutSuggestor> *)oneFavoritesSuggestor;
- (<MapsSuggestionsFinanceKitConnector> *)oneFinanceKitConnector;
- (<MapsSuggestionsFindMyConnector> *)oneFindMyConnector;
- (<MapsSuggestionsFlightRequester> *)oneFlightRequester;
- (<MapsSuggestionsMapsSyncConnector> *)oneMapsSyncConnector;
- (<MapsSuggestionsPortraitConnector> *)onePortraitConnector;
- (<MapsSuggestionsRoutineConnector> *)oneRoutineConnector;
- (<MapsSuggestionsVirtualGarageConnector> *)oneVirtualGarageConnector;

@end
