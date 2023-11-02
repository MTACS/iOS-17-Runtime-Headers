
@interface PPMediaPlayerDelegate : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _donationDelaySeconds;
    PPNamedEntityStore * _namedEntityStore;
    PPMediaPlayerResponse * _pendingDonation;
    NSDate * _pendingDonationTimestamp;
    bool  _useNamedEntityDissector;
}

+ (id)bundleIdOfCurrentForegroundApp;

- (void).cxx_destruct;
- (void)_donateDelayedResponse:(id)arg1 timePlayed:(double)arg2 bundleId:(id)arg3;
- (void)_registerForNowPlayingNotifications;
- (id)getResponse;
- (id)init;
- (id)initWithNamedEntityStore:(id)arg1 donationDelaySeconds:(double)arg2 registersResponseLoading:(bool)arg3 useNamedEntityDissector:(bool)arg4;
- (void)processResponse:(id)arg1;
- (void)waitForQueueEmpty;

@end
