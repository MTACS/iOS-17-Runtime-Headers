
@interface _TtCC7SiriGeo11MapsService25CapabilityFetcherObserver : NSObject <MSPSharedTripCapabilityLevelFetcherObserver> {
    void capabilities;
    void completion;
    void levelFetcher;
    void logObject;
    void timeout;
}

- (void).cxx_destruct;
- (void)capabilityLevelsDidUpdate;
- (id)init;

@end
