
@interface MapsSuggestionsMapsLocationAllowedTriggeringToggle : MapsSuggestionsTriggeringToggle <CLLocationManagerDelegate> {
    CLLocationManager * _locationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (bool)isTrue;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
