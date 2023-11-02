
@interface MFMailComposeContactsSearchController : NSObject <CNAutocompleteSearchConsumer> {
    NSMutableArray * _autocompleteSearchResults;
    NSMutableArray * _corecipientSearchResults;
    NSNumber * _corecipientSearchTaskID;
    <MFMailComposeContactsSearchControllerDelegate> * _delegate;
    bool  _foundAnySearchResults;
    CNAutocompleteSearchManager * _manager;
    NSNumber * _taskID;
    unsigned long long  _waitingOnSearchResultsCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMailComposeContactsSearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *taskID;

- (void).cxx_destruct;
- (void)_cancelSearchAndNotify:(bool)arg1;
- (void)_finishSearch;
- (void)_reset;
- (void)beganNetworkActivity;
- (void)cancelSearch;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (id)delegate;
- (void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)endedNetworkActivity;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)arg1;
- (id)init;
- (void)removeRecipient:(id)arg1;
- (void)searchWithString:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setTaskID:(id)arg1;
- (id)taskID;

@end
