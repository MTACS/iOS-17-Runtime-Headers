
@interface MUDirectionsActionRowItemViewModel : MUActionRowItemViewModel <MKETAProviderObserver> {
    MKETAProvider * _etaProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (id)accessibilityIdentifier;
- (id)analyticsButtonValue;
- (id)initWithETAProvider:(id)arg1;
- (bool)isEnabled;
- (id)preferredBackgroundColor;
- (id)preferredTintColor;
- (id)symbolName;
- (id)titleText;

@end
