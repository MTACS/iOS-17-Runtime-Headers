
@protocol CNAutocompleteSuggestionsViewControllerDelegate <NSObject>

@required

- (NSArray *)selectedRecipientsForSuggestionsController:(CNAutocompleteSuggestionsViewController *)arg1;
- (void)suggestionsController:(CNAutocompleteSuggestionsViewController *)arg1 didDeselectRecipient:(CNComposeRecipient *)arg2;
- (void)suggestionsController:(CNAutocompleteSuggestionsViewController *)arg1 didSelectRecipient:(CNComposeRecipient *)arg2;
- (void)suggestionsControllerTitleLabelWasTapped:(CNAutocompleteSuggestionsViewController *)arg1;

@optional

- (bool)suggestionsController:(void *)arg1 imageDataForRecipient:(void *)arg2 imageUpdateBlock:(void *)arg3; // needs 3 arg types, found 8: CNAutocompleteSuggestionsViewController *, CNComposeRecipient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)suggestionsControllerWillBeginScroll:(CNAutocompleteSuggestionsViewController *)arg1;

@end
