
@interface MUPlaceDistanceRibbonViewModel : MUPlaceRibbonItemViewModel <MKETAProviderObserver> {
    MUPlaceRibbonItemViewModel * _crowsDistanceViewModel;
    MKETAProvider * _etaProvider;
    MKMapItem * _mapItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (void)dealloc;
- (id)initWithMapItem:(id)arg1 etaProvider:(id)arg2;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;

@end
