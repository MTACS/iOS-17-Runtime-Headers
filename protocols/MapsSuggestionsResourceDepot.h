
@protocol MapsSuggestionsResourceDepot <MapsSuggestionsObject>

@required

- (MapsSuggestionsBiome *)oneBiome;
- (MapsSuggestionsContactActivity *)oneContactActivity;
- (MapsSuggestionsContacts *)oneContacts;
- (MapsSuggestionsEventKit *)oneEventKit;
- (MapsSuggestionsShortcutManager *)oneFavorites;
- (MapsSuggestionsFinanceKit *)oneFinanceKit;
- (MapsSuggestionsFindMy *)oneFindMy;
- (MapsSuggestionsFlightUpdater *)oneFlightUpdater;
- (<MapsSuggestionsInsights> *)oneInsights;
- (MapsSuggestionsMapsSync *)oneMapsSync;
- (<MapsSuggestionsNetworkRequester> *)oneNetworkRequester;
- (MapsSuggestionsPortrait *)onePortrait;
- (MapsSuggestionsRoutine *)oneRoutine;
- (<MapsSuggestionsSourceDelegate> *)oneSourceDelegate;
- (MapsSuggestionsUser *)oneUser;
- (MapsSuggestionsVirtualGarage *)oneVirtualGarage;

@end
