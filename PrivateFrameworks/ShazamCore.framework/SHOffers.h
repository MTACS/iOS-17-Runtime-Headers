
@interface SHOffers : NSObject {
    SHTokenizedURL * _defaultURL;
    NSDictionary * _offerResponse;
    SHTokenizedURL * _shazamURL;
}

@property (nonatomic, readonly, copy) NSString *campaignSubtitle;
@property (nonatomic, readonly, copy) NSString *defaultSubtitle;
@property (nonatomic, readonly) SHTokenizedURL *defaultURL;
@property (nonatomic, readonly) NSDictionary *offerResponse;
@property (nonatomic, readonly) SHTokenizedURL *shazamURL;

- (void).cxx_destruct;
- (id)appleMusicOffers;
- (id)campaignSubtitle;
- (id)campaignURLForTrackID:(id)arg1 bundleID:(id)arg2 token:(id)arg3;
- (id)configForOfferNamed:(id)arg1 bundleID:(id)arg2;
- (id)defaultSubtitle;
- (id)defaultURL;
- (id)defaultURLForBundleID:(id)arg1;
- (id)initWithOfferResponse:(id)arg1;
- (id)offerResponse;
- (id)shazamURL;
- (id)subtitleForOfferNamed:(id)arg1 bundleID:(id)arg2;
- (id)urlForOfferNamed:(id)arg1 bundleID:(id)arg2;
- (id)valueForSpecializedKey:(id)arg1 forBundleID:(id)arg2 inDictionary:(id)arg3;

@end
