
@interface GEOVenueSearchFilter : NSObject <GEOSearchFilter> {
    <GEOVenueIdentifier> * _identifier;
}

@property (nonatomic, readonly) <GEOVenueIdentifier> *identifier;

- (void).cxx_destruct;
- (bool)applyToSearchParameters:(id)arg1 error:(id*)arg2;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end
