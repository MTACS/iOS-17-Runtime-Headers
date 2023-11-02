
@interface MRRouteBannerRequest : MRBaseBannerRequest {
    unsigned long long  _bannerType;
    NSString * _routeIdentifier;
    MRStaticRouteBannerRequest * _staticRequest;
}

@property (nonatomic) unsigned long long bannerType;
@property (nonatomic, retain) NSString *routeIdentifier;
@property (nonatomic, retain) MRStaticRouteBannerRequest *staticRequest;

+ (id)requestWithStaticRequest:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)bannerType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRouteIdentifier:(id)arg1 staticRequest:(id)arg2;
- (id)routeIdentifier;
- (void)setBannerType:(unsigned long long)arg1;
- (void)setRouteIdentifier:(id)arg1;
- (void)setStaticRequest:(id)arg1;
- (id)staticRequest;

@end
