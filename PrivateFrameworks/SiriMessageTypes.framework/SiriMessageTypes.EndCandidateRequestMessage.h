
@interface SiriMessageTypes.EndCandidateRequestMessage : SiriMessageTypes.RequestMessageBase {
    void reason;
}

@property (nonatomic, readonly) NSString *description;

- (id)description;

@end
