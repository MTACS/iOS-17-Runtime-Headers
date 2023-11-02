
@interface SiriMessageTypes.TRPCandidateRequestMessageBase : SiriMessageTypes.RequestMessageBase {
    void trpCandidateId;
    void userId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
