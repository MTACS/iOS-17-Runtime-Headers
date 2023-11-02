
@protocol EKEventAutocompleteResultsEditItemDelegate <EKCalendarItemEditItemDelegate>

@optional

- (void)autocompleteResultsEditItem:(EKEventAutocompleteResultsEditItem *)arg1 resultSelected:(EKAutocompleteSearchResult *)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(EKEventAutocompleteResultsEditItem *)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(EKEventAutocompleteResultsEditItem *)arg1;

@end
