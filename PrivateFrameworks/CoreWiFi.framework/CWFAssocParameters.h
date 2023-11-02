
@interface CWFAssocParameters : NSObject <NSCopying, NSSecureCoding> {
    CWFEAPCredentials * _EAPCredentials;
    long long  _bandPreference;
    NSString * _colocatedScopeID;
    bool  _forceBSSID;
    bool  _has6GHzOnlyBSS;
    CWFNetworkProfile * _knownNetworkProfile;
    NSString * _password;
    bool  _rememberUponSuccessfulAssociation;
    CWFScanResult * _scanResult;
}

@property (nonatomic, copy) CWFEAPCredentials *EAPCredentials;
@property (nonatomic) long long bandPreference;
@property (nonatomic, copy) NSString *colocatedScopeID;
@property (nonatomic) bool forceBSSID;
@property (nonatomic) bool has6GHzOnlyBSS;
@property (nonatomic, copy) CWFNetworkProfile *knownNetworkProfile;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool rememberUponSuccessfulAssociation;
@property (nonatomic, copy) CWFScanResult *scanResult;

// Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EAPCredentials;
- (long long)bandPreference;
- (id)colocatedScopeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceBSSID;
- (bool)has6GHzOnlyBSS;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssocParameters:(id)arg1;
- (id)knownNetworkProfile;
- (id)password;
- (bool)rememberUponSuccessfulAssociation;
- (id)scanResult;
- (void)setBandPreference:(long long)arg1;
- (void)setColocatedScopeID:(id)arg1;
- (void)setEAPCredentials:(id)arg1;
- (void)setForceBSSID:(bool)arg1;
- (void)setHas6GHzOnlyBSS:(bool)arg1;
- (void)setKnownNetworkProfile:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRememberUponSuccessfulAssociation:(bool)arg1;
- (void)setScanResult:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

+ (id)associationParametersFromScanRecord:(id)arg1 profile:(id)arg2;
+ (id)associationParametersFromScanRecord:(id)arg1 profile:(id)arg2;

@end
