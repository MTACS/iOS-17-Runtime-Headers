
@interface SiriMessageTypes.NLTRPCandidateMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void tcuMappedNLRepetitions;
    void tcuMappedNLResponse;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
