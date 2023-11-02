
@interface SiriMessageTypes.NLResultCandidateMessage : SiriMessageTypes.NLResultCandidateMessageBase {
    void voiceIdClassification;
    void voiceIdScore;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (id)debugDescription;
- (id)description;

@end
