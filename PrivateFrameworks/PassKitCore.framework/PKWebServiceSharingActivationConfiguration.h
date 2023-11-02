
@interface PKWebServiceSharingActivationConfiguration : NSObject {
    long long  _accessPassType;
    NSArray * _allowedSharingChannels;
    NSArray * _blockedSharingChannels;
    NSString * _channelBundleIdentifier;
    long long  _channelRiskLevel;
    long long  _codeLength;
    unsigned long long  _defaultState;
    NSString * _manufacturerIdentifier;
    long long  _trustLevel;
    PKOSVersionRequirementRange * _versionRange;
}

@property (nonatomic, readonly) long long accessPassType;
@property (nonatomic, readonly) NSArray *allowedSharingChannels;
@property (nonatomic, readonly) NSArray *blockedSharingChannels;
@property (nonatomic, readonly) NSString *channelBundleIdentifier;
@property (nonatomic, readonly) long long channelRiskLevel;
@property (nonatomic, readonly) long long codeLength;
@property (nonatomic, readonly) unsigned long long defaultState;
@property (nonatomic, readonly) NSString *manufacturerIdentifier;
@property (nonatomic, readonly) long long trustLevel;
@property (nonatomic, readonly) PKOSVersionRequirementRange *versionRange;

- (void).cxx_destruct;
- (long long)accessPassType;
- (id)allowedSharingChannels;
- (id)blockedSharingChannels;
- (id)channelBundleIdentifier;
- (long long)channelRiskLevel;
- (long long)codeLength;
- (unsigned long long)defaultState;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)manufacturerIdentifier;
- (long long)trustLevel;
- (id)versionRange;

@end
