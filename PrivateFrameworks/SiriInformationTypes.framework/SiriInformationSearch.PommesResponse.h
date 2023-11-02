
@interface SiriInformationSearch.PommesResponse : NSObject <NSSecureCoding> {
    void $__lazy_storage_$__computedPrimaryQueryConfidence;
    void clientResults;
    void componentsWarmedUp;
    void conversationContext;
    void experiences;
    void isCachedResponse;
    void isHandledByPreflight;
    void isPersonalDomainFallback;
    void listenAfterSpeaking;
    void metadataDomainName;
    void pegasusDomainFlowStepLog;
    void pegasusDomainUserSensitiveTier1Log;
    void pommesCandidateId;
    void preflightClientHandlerIdentifier;
    void renderedTexts;
    void requestCountryCode;
    void requestId;
    void searchReason;
    void taskStepLogs;
    void userSensitiveTier1Logs;
}

@property (nonatomic, readonly) NSString *description;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
