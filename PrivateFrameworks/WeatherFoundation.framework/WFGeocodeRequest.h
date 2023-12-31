
@interface WFGeocodeRequest : WFTask {
    MKLocalSearchCompletion * _autocompleteSearchResult;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    WFLocation * _geocodedResult;
    id /* block */  _resultHandler;
    NSString * _searchString;
}

@property (retain) MKLocalSearchCompletion *autocompleteSearchResult;
@property struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (retain) WFLocation *geocodedResult;
@property (readonly) id /* block */ resultHandler;
@property (retain) NSString *searchString;
@property (readonly) NSString *searchTerm;

- (void).cxx_destruct;
- (id)autocompleteSearchResult;
- (void)cleanup;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (id)geocodedResult;
- (void)handleCancellation;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(id /* block */)arg2;
- (id /* block */)resultHandler;
- (id)searchString;
- (id)searchTerm;
- (void)setAutocompleteSearchResult:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setGeocodedResult:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)startWithService:(id)arg1;

@end
