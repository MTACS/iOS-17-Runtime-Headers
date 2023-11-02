
@interface MRGroupSessionToken : NSObject <NSSecureCoding> {
    MRDiscoveredGroupSession * _discoveredSession;
    MRNearbyInvitation * _invitation;
    NSData * _invitationData;
    NSString * _storefrontCountryCode;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) MRDiscoveredGroupSession *discoveredSession;
@property (nonatomic, readonly) NSString *hostDisplayName;
@property (nonatomic, readonly) MRNearbyInvitation *invitation;
@property (nonatomic, readonly) NSData *invitationData;
@property (nonatomic, readonly) NSString *joinURLString;
@property (nonatomic, readonly) NSString *localizedSessionName;
@property (nonatomic, readonly) unsigned char routeType;
@property (nonatomic, retain) NSString *storefrontCountryCode;

+ (bool)supportsSecureCoding;
+ (id)tokenForJoinURLString:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)discoveredSession;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDiscoveredSession:(id)arg1;
- (id)initWithInvitation:(id)arg1 invitationData:(id)arg2;
- (id)invitation;
- (id)invitationData;
- (bool)isEqual:(id)arg1;
- (id)joinURLString;
- (id)localizedSessionName;
- (unsigned char)routeType;
- (void)setStorefrontCountryCode:(id)arg1;
- (id)storefrontCountryCode;

@end
