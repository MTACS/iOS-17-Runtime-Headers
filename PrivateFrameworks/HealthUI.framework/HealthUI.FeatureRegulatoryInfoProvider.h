
@interface HealthUI.FeatureRegulatoryInfoProvider : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _featureRegulatoryInfo;
    void featureAvailabilityStore;
    void infoTransform;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void pairedDeviceFeatureAttributesProvider;
    void subscribers;
}

- (void).cxx_destruct;
- (id)init;

@end
