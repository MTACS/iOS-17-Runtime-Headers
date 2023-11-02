
@interface CoreIDVShared.IdentityProofingDisplayInfo : NSObject <NSSecureCoding> {
    void attributeConfig;
    void docScan;
    void featureEnablementConfig;
    void idType;
    void learnMoreURL;
    void lowDataModeAlertDataThresholdInBytes;
    void proofingUI;
    void waitingForWiFiAlertDataThresholdInBytes;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
