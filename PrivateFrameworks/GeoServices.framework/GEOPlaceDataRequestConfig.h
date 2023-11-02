
@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    unsigned long long  _multipathServiceType;
    GEOPDPlaceRequest * _placeRequest;
    NSNumber * _requestPriority;
    bool  _supportsOffline;
    double  _timeout;
    unsigned long long  _urlType;
    bool  _usesBackgroundURL;
}

- (void).cxx_destruct;
- (id)additionalHTTPHeaders;
- (id)additionalStatesForNetworkEvent;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;
- (unsigned long long)multipathServiceType;
- (id)serviceTypeNumber;
- (bool)supportsOffline;
- (double)timeout;
- (unsigned long long)urlType;
- (bool)usesBackgroundURL;

@end
