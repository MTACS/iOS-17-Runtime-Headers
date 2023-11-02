
@interface MUPlaceAddStopActionRowItemViewModel : MUActionRowItemViewModel <MKETAProviderObserver> {
    bool  _canShowDetourTime;
    GEOMapItemDetourInfo * _detourInfo;
    MKETAProvider * _etaProvider;
    double  _etaTravelTime;
    bool  _hiddenWhileWaitingForETA;
    bool  _isSearchAlongRoute;
}

@property (nonatomic, readonly) bool canShowDetourTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
@property (nonatomic, readonly) MKETAProvider *etaProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSearchAlongRoute;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (id)accessibilityIdentifier;
- (id)analyticsButtonValue;
- (bool)canShowDetourTime;
- (id)detourInfo;
- (id)etaProvider;
- (id)initWithSearchAlongRoute:(bool)arg1 ETAProvider:(id)arg2 detourInfo:(id)arg3 canShowDetourTime:(bool)arg4;
- (bool)isEnabled;
- (bool)isHidden;
- (bool)isSearchAlongRoute;
- (id)preferredBackgroundColor;
- (id)preferredTintColor;
- (id)symbolName;
- (id)titleText;

@end
