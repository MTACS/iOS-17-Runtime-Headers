
@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {
    void * _mecabraCandidate;
    TIMecabraWrapper * _mecabraWrapper;
    bool  _partialCandidate;
}

@property (nonatomic, retain) TIMecabraWrapper *mecabraWrapper;
@property (getter=isPartialCandidate, nonatomic) bool partialCandidate;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(bool)arg3;
- (bool)isPartialCandidate;
- (id)mecabraWrapper;
- (void)perform;
- (void)setMecabraWrapper:(id)arg1;
- (void)setPartialCandidate:(bool)arg1;

@end
