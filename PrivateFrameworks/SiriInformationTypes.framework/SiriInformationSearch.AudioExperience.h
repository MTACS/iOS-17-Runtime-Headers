
@interface SiriInformationSearch.AudioExperience : SiriInformationSearch.Experience {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  audioClientComponent;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  audioUnderstanding;
    void boltProxiedBundleID;
    void internalSignals;
    void isGlideEligible;
    void launchID;
    void lock;
    void matchingSpans;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  multiUserContext;
    void networkAvailableAtRequest;
    void parse;
    void pegasusAudioType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  playbackSignals;
    void serverAudioResults;
    void shouldPerformAppSelection;
    void systemExtensionBundleID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
