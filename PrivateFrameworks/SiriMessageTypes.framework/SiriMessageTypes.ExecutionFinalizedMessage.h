
@interface SiriMessageTypes.ExecutionFinalizedMessage : SiriMessageTypes.TRPCandidateRequestMessageBase {
    void flowPluginId;
    void tcuId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
