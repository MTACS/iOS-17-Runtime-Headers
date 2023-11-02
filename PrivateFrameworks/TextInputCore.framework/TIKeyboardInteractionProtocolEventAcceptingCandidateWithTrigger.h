
@interface TIKeyboardInteractionProtocolEventAcceptingCandidateWithTrigger : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    NSString * _candidateAcceptedTrigger;
}

@property (nonatomic, readonly) NSString *candidateAcceptedTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidateAcceptedTrigger;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidateAcceptedTrigger:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;

@end
