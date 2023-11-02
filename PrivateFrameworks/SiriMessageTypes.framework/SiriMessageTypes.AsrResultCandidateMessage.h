
@interface SiriMessageTypes.AsrResultCandidateMessage : SiriMessageTypes.UserIdAwareResultCandidateMessageBase {
    void speechPackage;
    void voiceIdClassification;
    void voiceIdScore;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;

@end
