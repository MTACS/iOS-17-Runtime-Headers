
@interface STGenericIntentRequest : AFSiriRequest {
    bool  __launchToForeground;
    NSString * _appIdentifier;
    NSDictionary * _info;
    NSString * _intentString;
    NSString * _utterance;
}

@property (setter=_setLaunchToForeground:, nonatomic) bool _launchToForeground;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_af_analyticsContextDescription;
- (bool)_launchToForeground;
- (bool)_makeAppFrontmost;
- (void)_setLaunchToForeground:(bool)arg1;
- (id)appIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)info;
- (id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)intentString;
- (bool)isForegroundLaunch;
- (id)responseWithCode:(long long)arg1;
- (id)utterance;

@end
