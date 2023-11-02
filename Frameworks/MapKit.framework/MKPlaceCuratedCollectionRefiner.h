
@interface MKPlaceCuratedCollectionRefiner : NSObject {
    MKMapItemIdentifier * _collectionIdentifier;
    <MKMapServiceCuratedCollectionTicket> * _identifierRefinementTicket;
    <MKMapServiceCuratedCollectionItemsTicket> * _mapItemRefinementTicket;
}

- (void).cxx_destruct;
- (void)_resolveMapItemsWithCollection:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCollectionIdentifier:(unsigned long long)arg1;
- (id)initWithCollectionIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2;

@end
