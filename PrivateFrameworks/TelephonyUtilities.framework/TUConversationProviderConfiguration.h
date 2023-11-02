
@interface TUConversationProviderConfiguration : NSObject <NSSecureCoding> {
    NSString * _bundleID;
    NSString * _pseudonymFeatureID;
    NSString * _serviceName;
    NSSet * _supportedMediaTypes;
    bool  _supportsConversationHandoff;
    bool  _supportsLinks;
    bool  _supportsSharePlay;
    bool  _wantsLeaveOnInvalidation;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *pseudonymFeatureID;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, copy) NSSet *supportedMediaTypes;
@property (nonatomic) bool supportsConversationHandoff;
@property (nonatomic) bool supportsLinks;
@property (nonatomic) bool supportsSharePlay;
@property (nonatomic, readonly) bool supportsVideo;
@property (nonatomic) bool wantsLeaveOnInvalidation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationProvider:(id)arg1;
- (id)pseudonymFeatureID;
- (id)serviceName;
- (void)setBundleID:(id)arg1;
- (void)setPseudonymFeatureID:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSupportedMediaTypes:(id)arg1;
- (void)setSupportsConversationHandoff:(bool)arg1;
- (void)setSupportsLinks:(bool)arg1;
- (void)setSupportsSharePlay:(bool)arg1;
- (void)setWantsLeaveOnInvalidation:(bool)arg1;
- (id)supportedMediaTypes;
- (bool)supportsConversationHandoff;
- (bool)supportsLinks;
- (bool)supportsSharePlay;
- (bool)supportsVideo;
- (bool)wantsLeaveOnInvalidation;

@end
