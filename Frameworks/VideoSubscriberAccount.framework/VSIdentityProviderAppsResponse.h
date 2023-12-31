
@interface VSIdentityProviderAppsResponse : NSObject {
    NSArray * _channelMappings;
    NSArray * _providerAppAdamIDs;
}

@property (nonatomic, copy) NSArray *channelMappings;
@property (nonatomic, copy) NSArray *providerAppAdamIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channelMappings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)providerAppAdamIDs;
- (void)setChannelMappings:(id)arg1;
- (void)setProviderAppAdamIDs:(id)arg1;

@end
