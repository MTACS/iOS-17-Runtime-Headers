
@interface NPKIDVRemoteDeviceCredentialPreflightStatus : NSObject <NSSecureCoding> {
    unsigned long long  _credentialType;
    bool  _preflightSuccessful;
    unsigned long long  _provisionedPassesCount;
}

@property (nonatomic, readonly) unsigned long long credentialType;
@property (nonatomic, readonly) bool preflightSuccessful;
@property (nonatomic, readonly) unsigned long long provisionedPassesCount;

+ (bool)supportsSecureCoding;

- (unsigned long long)credentialType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialType:(unsigned long long)arg1 provisionedPassesCount:(unsigned long long)arg2 preflightSuccessful:(bool)arg3;
- (bool)preflightSuccessful;
- (unsigned long long)provisionedPassesCount;

@end
