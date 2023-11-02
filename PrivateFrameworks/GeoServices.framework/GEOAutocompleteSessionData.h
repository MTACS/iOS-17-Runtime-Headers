
@interface GEOAutocompleteSessionData : NSObject {
    double  _analyticsShortSessionCreateTime;
    GEOPDAutocompleteSessionData * _autocompleteSessionData;
}

@property (nonatomic, readonly) GEOPDAutocompleteSessionData *autocompleteSessionData;

- (void).cxx_destruct;
- (id)autocompleteSessionData;
- (id)init;
- (id)initWithAutoCompleteSessionData:(id)arg1;
- (id)updateWithAutoCompleteSessionData:(id)arg1;

@end
