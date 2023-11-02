
@protocol MapsSuggestionsLocationVisitUpdaterDelegate <MapsSuggestionsLocationUpdaterDelegate>

@required

- (void)didEnterVisit:(CLVisit *)arg1;
- (void)didLeaveVisit:(CLVisit *)arg1;

@end
