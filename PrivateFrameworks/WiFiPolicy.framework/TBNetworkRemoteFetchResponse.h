
@interface TBNetworkRemoteFetchResponse : TBRemoteFetchResponse {
    GEOWiFiQualityNetworkSearchResult * _networkSearchResult;
}

@property (nonatomic, retain) GEOWiFiQualityNetworkSearchResult *networkSearchResult;

+ (id)responseWithNetworkSearchResults:(id)arg1;

- (void).cxx_destruct;
- (id)initWithNetworkSearchResults:(id)arg1;
- (id)networkSearchResult;
- (void)setNetworkSearchResult:(id)arg1;

@end
