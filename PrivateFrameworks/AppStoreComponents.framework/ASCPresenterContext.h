
@interface ASCPresenterContext : NSObject {
    ASCAppOfferStateCenter * _appOfferStateCenter;
    ASCArtworkFetcher * _artworkFetcher;
    ASCLockupFetcher * _lockupFetcher;
}

@property (nonatomic, readonly) ASCAppOfferStateCenter *appOfferStateCenter;
@property (nonatomic, readonly) ASCArtworkFetcher *artworkFetcher;
@property (nonatomic, readonly) ASCLockupFetcher *lockupFetcher;

+ (id)sharedContext;

- (void).cxx_destruct;
- (id)appOfferStateCenter;
- (id)artworkFetcher;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArtworkFetcher:(id)arg1 lockupFetcher:(id)arg2 appOfferStateCenter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lockupFetcher;

@end
