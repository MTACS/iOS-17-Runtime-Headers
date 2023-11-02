
@interface ASCWatchApps : NSObject {
    ASCAppOfferStateCenter * _appOfferStateCenter;
}

@property (nonatomic, readonly) ASCAppOfferStateCenter *appOfferStateCenter;

+ (id)sharedWatchApps;

- (void).cxx_destruct;
- (id)appOfferStateCenter;
- (id)initWithAppOfferStateCenter:(id)arg1;
- (id)reinstallAppWithID:(id)arg1;
- (id)reinstallSystemAppWithBundleID:(id)arg1;

@end
