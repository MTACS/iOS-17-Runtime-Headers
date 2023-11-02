
@interface TUConversationProvider : NSObject <NSSecureCoding> {
    NSString * _identifier;
    TUConversationProviderConfiguration * _providerConfiguration;
    NSArray * _supportedMediaTypes;
}

@property (nonatomic, readonly, copy) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic, readonly) unsigned long long defaultAVMode;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) TUConversationProviderConfiguration *providerConfiguration;
@property (nonatomic, readonly, copy) NSArray *supportedMediaTypes;

+ (id)expanseProvider;
+ (id)faceTimeProvider;
+ (bool)matchesDefaultProviderIdentifier:(id)arg1;
+ (id)providerForIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unknownProvider;

- (void).cxx_destruct;
- (id)assumedIdentity;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)defaultAVMode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConversationProvider:(id)arg1;
- (bool)isDefaultProvider;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationProvider:(id)arg1;
- (id)providerConfiguration;
- (id)pseudonymFeatureID;
- (id)supportedMediaTypes;
- (bool)supportsAVMode:(unsigned long long)arg1;
- (bool)supportsLinks;
- (bool)supportsMediaType:(long long)arg1;
- (bool)supportsSharePlay;
- (bool)supportsVideo;

@end
