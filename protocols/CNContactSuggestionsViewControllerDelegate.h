
@protocol CNContactSuggestionsViewControllerDelegate <NSObject>

@required

- (void)suggestionsController:(CNContactSuggestionsViewController *)arg1 didDeselectContact:(CNContact *)arg2;
- (void)suggestionsController:(CNContactSuggestionsViewController *)arg1 didSelectContact:(CNContact *)arg2;

@optional

- (NSArray *)ignoredContactIdentifiersForSuggestionsController:(CNContactSuggestionsViewController *)arg1;
- (bool)suggestionsController:(CNContactSuggestionsViewController *)arg1 canSelectContact:(CNContact *)arg2;
- (void)suggestionsController:(CNContactSuggestionsViewController *)arg1 didChangeToHeight:(double)arg2;
- (bool)suggestionsController:(CNContactSuggestionsViewController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;

@end
