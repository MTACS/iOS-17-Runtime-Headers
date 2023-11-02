
@interface TRIActivationEventRecord : NSObject <NSCopying> {
    NSString * _aneVersion;
    NSString * _carrierBundleIdentifier;
    NSString * _carrierCountryIsoCode;
    int  _deploymentId;
    long long  _diagnosticsUsageEnabled;
    NSString * _factorPackSetId;
    long long  _hasAne;
    NSString * _languageCode;
    NSString * _osBuild;
    NSString * _parentId;
    NSString * _regionCode;
}

@property (nonatomic, readonly) NSString *aneVersion;
@property (nonatomic, readonly) NSString *carrierBundleIdentifier;
@property (nonatomic, readonly) NSString *carrierCountryIsoCode;
@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) long long diagnosticsUsageEnabled;
@property (nonatomic, readonly) NSString *factorPackSetId;
@property (nonatomic, readonly) long long hasAne;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) NSString *parentId;
@property (nonatomic, readonly) NSString *regionCode;

+ (id)recordWithParentId:(id)arg1 factorPackSetId:(id)arg2 deploymentId:(int)arg3 osBuild:(id)arg4 languageCode:(id)arg5 regionCode:(id)arg6 carrierBundleIdentifier:(id)arg7 carrierCountryIsoCode:(id)arg8 diagnosticsUsageEnabled:(long long)arg9 hasAne:(long long)arg10 aneVersion:(id)arg11;

- (void).cxx_destruct;
- (id)aneVersion;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (id)copyWithReplacementAneVersion:(id)arg1;
- (id)copyWithReplacementCarrierBundleIdentifier:(id)arg1;
- (id)copyWithReplacementCarrierCountryIsoCode:(id)arg1;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithReplacementDiagnosticsUsageEnabled:(long long)arg1;
- (id)copyWithReplacementFactorPackSetId:(id)arg1;
- (id)copyWithReplacementHasAne:(long long)arg1;
- (id)copyWithReplacementLanguageCode:(id)arg1;
- (id)copyWithReplacementOsBuild:(id)arg1;
- (id)copyWithReplacementParentId:(id)arg1;
- (id)copyWithReplacementRegionCode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (long long)diagnosticsUsageEnabled;
- (id)factorPackSetId;
- (long long)hasAne;
- (unsigned long long)hash;
- (id)init;
- (id)initWithParentId:(id)arg1 factorPackSetId:(id)arg2 deploymentId:(int)arg3 osBuild:(id)arg4 languageCode:(id)arg5 regionCode:(id)arg6 carrierBundleIdentifier:(id)arg7 carrierCountryIsoCode:(id)arg8 diagnosticsUsageEnabled:(long long)arg9 hasAne:(long long)arg10 aneVersion:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (id)languageCode;
- (id)osBuild;
- (id)parentId;
- (id)regionCode;

@end
