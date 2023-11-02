
@interface PFMediaCapabilities : NSObject {
    NSDictionary * _capabilitiesInformation;
    NSDictionary * _outOfBandHints;
}

@property (retain) NSDictionary *capabilitiesInformation;
@property (retain) NSDictionary *outOfBandHints;

+ (id)capabilitiesForCurrentDevice;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)arg1;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg1;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (bool)currentDeviceIsEligibleForHDRPlayback;
+ (id)legacyCapabilities;
+ (long long)newFormatsConfiguration;
+ (id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (id)recordSlomoConfigurationWithValidValues:(id)arg1;
+ (id)recordVideoConfigurationWithValidValues:(id)arg1;
+ (bool)setNewFormatsConfiguration:(long long)arg1 fromSource:(long long)arg2;
+ (void)setRecordSlomoConfiguration:(id)arg1;
+ (void)setRecordVideoConfiguration:(id)arg1;
+ (id)stringForSupport:(long long)arg1;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (bool)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)arg1;
+ (bool)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)arg1;
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;

- (void).cxx_destruct;
- (id)capabilitiesInformation;
- (long long)decodingSupportForAVAsset:(id)arg1;
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (id)description;
- (id)initWithOpaqueRepresentation:(id)arg1;
- (id)initWithPlatformInformation:(id)arg1;
- (id)opaqueRepresentation;
- (id)outOfBandHints;
- (id)platformInformation;
- (void)setCapabilitiesInformation:(id)arg1;
- (void)setOutOfBandHints:(id)arg1;
- (long long)supportForAdjustmentBaseResources;
- (long long)supportForAssetBundleVersion:(id)arg1;
- (long long)supportForContainerTypeIdentifier:(id)arg1;
- (long long)supportForLivePhotoVersion:(id)arg1;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (bool)supportsHDR;
- (bool)supportsTranscodeChoice;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;
- (long long)userDefaultsPeerOverrideValue;

@end
