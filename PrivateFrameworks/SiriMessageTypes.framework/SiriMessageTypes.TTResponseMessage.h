
@interface SiriMessageTypes.TTResponseMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void mitigationDecision;
    void tcuMappedNLResponse;
    void tcuStateDict;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
