
@interface TIKeyboardInteractionProtocolEventCandidatesOffered : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIAutocorrectionList * _candidates;
}

@property (nonatomic, readonly) TIAutocorrectionList *candidates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)adjustSourceMaskForCandidate:(id)arg1;
- (id)candidates;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidatesOffered:(id)arg1 keyboardState:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)sendTo:(id)arg1;

@end
