
@interface PhotosUICore.PXMapKitSuggester : NSObject <MKLocalSearchCompleterDelegate> {
    void $__lazy_storage_$_searchCompleter;
    void completion;
    void coordinateRegion;
    void input;
}

- (void).cxx_destruct;
- (void)completer:(id)arg1 didFailWithError:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1;
- (id)init;

@end
