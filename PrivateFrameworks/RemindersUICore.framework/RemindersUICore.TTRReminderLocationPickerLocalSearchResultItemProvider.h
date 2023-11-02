
@interface RemindersUICore.TTRReminderLocationPickerLocalSearchResultItemProvider : NSObject <MKLocalSearchCompleterDelegate> {
    void currentFetchPromise;
    void currentSearchLocation;
    void currentSearchText;
    void localSearchCompleter;
}

- (void).cxx_destruct;
- (void)completer:(id)arg1 didFailWithError:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1;
- (id)init;

@end
