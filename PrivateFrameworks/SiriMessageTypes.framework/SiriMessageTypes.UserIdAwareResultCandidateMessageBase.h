
@interface SiriMessageTypes.UserIdAwareResultCandidateMessageBase : SiriMessageTypes.ResultCandidateRequestMessageBase {
    void userId;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;

@end
