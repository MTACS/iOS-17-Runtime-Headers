
@interface SiriMessageTypes.StartCandidateRequestMessage : SiriMessageTypes.RequestMessageBase {
    void isSiriPrompt;
}

@property (nonatomic, readonly) NSString *description;

- (id)description;

@end
