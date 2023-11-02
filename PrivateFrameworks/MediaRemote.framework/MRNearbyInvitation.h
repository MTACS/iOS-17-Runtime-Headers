
@interface MRNearbyInvitation : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _localizedSessionName;
    unsigned char  _routeType;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *localizedSessionName;
@property (nonatomic) unsigned char routeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedSessionName;
- (unsigned char)routeType;
- (void)setDisplayName:(id)arg1;
- (void)setLocalizedSessionName:(id)arg1;
- (void)setRouteType:(unsigned char)arg1;

@end
