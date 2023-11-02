
@interface TIKeyboardInteractionProtocolEventCandidateAccepted : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent> {
    TIKeyboardCandidate * _candWord;
    long long  _candidateIndex;
    NSString * _context;
    TIDocumentState * _documentState;
    TIKeyboardInput * _input;
    NSString * _inputStem;
    bool  _predictionBarHit;
    bool  _useCandidateSelection;
}

@property (nonatomic, readonly) TIKeyboardCandidate *candWord;
@property (nonatomic, readonly) long long candidateIndex;
@property (nonatomic, readonly) NSString *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TIDocumentState *documentState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TIKeyboardInput *input;
@property (nonatomic, readonly) NSString *inputStem;
@property (nonatomic, readonly) bool predictionBarHit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useCandidateSelection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candWord;
- (long long)candidateIndex;
- (id)context;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidateAccepted:(id)arg1 withInput:(id)arg2 documentState:(id)arg3 inputContext:(id)arg4 inputStem:(id)arg5 predictionBarHit:(bool)arg6 useCandidateSelection:(bool)arg7 candidateIndex:(long long)arg8 keyboardState:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)inputStem;
- (bool)predictionBarHit;
- (void)sendTo:(id)arg1;
- (bool)useCandidateSelection;

@end
