
@interface _TtC15RemindersUICoreP33_AE2C375E75EA833B2B0B0EDDD8860B5314FetchOperation : _TtGC19ReminderKitInternal14AsyncOperationGSaOV15RemindersUICore30TTRReminderLocationPickerModel4Item__ <CNAutocompleteFetchDelegate> {
    void autocompleteStore;
    void fetch;
    void fetchCompletion;
    void fetchedItems;
    void searchText;
}

- (void).cxx_destruct;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)cancel;
- (id)init;

@end
