
@interface PassKitUI.AddressSearchingModel : NSObject <PKAddressSearchModelDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _contactResults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isMatchingContact;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mapsOnly;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mapsResults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _searchText;
    void contactMatchHandler;
    void emptyResultsForEmptySearchTerm;
    void ignoreNextSearchedText;
    void searchModel;
}

- (void).cxx_destruct;
- (void)contactsSearchUpdated:(id)arg1;
- (id)init;
- (void)mapSearchUpdated:(id)arg1;
- (void)selectedAddress:(id)arg1 withError:(id)arg2;

@end
