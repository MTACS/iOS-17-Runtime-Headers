
@interface PFMediaCapabilitiesQuery : NSObject {
    NSMutableDictionary * _capabilitiesInformation;
}

@property (retain) NSMutableDictionary *capabilitiesInformation;

- (void).cxx_destruct;
- (void)addAssetBundleInformationToDictionary:(id)arg1;
- (void)addCodecInformation;
- (void)addCodecSupportInformationToDictionary:(id)arg1;
- (void)addHEIFContainerInformationToDictionary:(id)arg1;
- (void)addLivePhotoInformationToDictionary:(id)arg1;
- (void)addPlatformInformation;
- (void)addPlatformInformationFromDictionary:(id)arg1;
- (void)addTranscodeChoiceWithOptions:(id)arg1;
- (void)addVendorSpecificInformationWithOptions:(id)arg1;
- (void)addVersion;
- (void)addVersion1And2HEVCCodecInformationToDictionary:(id)arg1;
- (id)capabilitiesInformation;
- (id)dictionaryRepresentation;
- (void)gatherCapabilitiesWithOptions:(id)arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)setCapabilitiesInformation:(id)arg1;

@end
