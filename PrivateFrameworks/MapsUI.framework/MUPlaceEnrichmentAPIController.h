
@interface MUPlaceEnrichmentAPIController : NSObject <MUPlaceEnrichmentDataProvider, MUPlaceEnrichmentFetcher> {
    GEOEnrichmentData * _enrichmentData;
    MKMapItem * _mapItem;
    GEOObserverHashTable * _observers;
    long long  _state;
    <MKMapServicePlaceEnrichmentTicket> * _ticket;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOEnrichmentData *enrichmentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MKMapServicePlaceEnrichmentTicket> *ticket;
@property (nonatomic, retain) GEOMapServiceTraits *traits;

+ (id)sharedPlaceEnrichmentAPIController;

- (void).cxx_destruct;
- (void)cancelFetchingPlaceEnrichment;
- (void)configureWithMapItem:(id)arg1 traits:(id)arg2;
- (long long)currentState;
- (id)description;
- (id)enrichmentData;
- (void)fetchPlaceEnrichment:(id /* block */)arg1;
- (id)initInternal;
- (id)mapItem;
- (id)placeEnrichmentData;
- (void)registerObserver:(id)arg1;
- (void)resetConfiguration;
- (void)setEnrichmentData:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTicket:(id)arg1;
- (void)setTraits:(id)arg1;
- (long long)state;
- (id)ticket;
- (id)traits;
- (void)unregisterObserver:(id)arg1;

@end
