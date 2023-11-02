
@interface MRGroupSessionBannerRequest : MRBaseBannerRequest {
    NSString * _hostDisplayName;
    unsigned char  _routeType;
}

@property (nonatomic, retain) NSString *hostDisplayName;
@property (nonatomic) unsigned char routeType;

+ (id)requestWithBundleIdentifierAffinity:(id)arg1 hostDisplayName:(id)arg2 routeType:(unsigned char)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hostDisplayName;
- (id)initWithBundleIdentifierAffinity:(id)arg1 hostDisplayName:(id)arg2 routeType:(unsigned char)arg3;
- (id)initWithCoder:(id)arg1;
- (unsigned char)routeType;
- (void)setHostDisplayName:(id)arg1;
- (void)setRouteType:(unsigned char)arg1;

@end
