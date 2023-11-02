
@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {
    void * _mecabraCandidate;
    TIMecabraEnvironment * _mecabraEnvironment;
    bool  _partialCandidate;
    bool  _prediction;
}

@property (nonatomic, retain) TIMecabraEnvironment *mecabraEnvironment;
@property (getter=isPartialCandidate, nonatomic) bool partialCandidate;
@property (getter=isPrediction, nonatomic) bool prediction;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(bool)arg3 isPrediction:(bool)arg4;
- (bool)isPartialCandidate;
- (bool)isPrediction;
- (id)mecabraEnvironment;
- (void)perform;
- (void)setMecabraEnvironment:(id)arg1;
- (void)setPartialCandidate:(bool)arg1;
- (void)setPrediction:(bool)arg1;

@end
