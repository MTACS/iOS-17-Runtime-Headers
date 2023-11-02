
@interface TIWordSearchOperationFlushDynamicData : TIWordSearchOperation {
    TIMecabraWrapper * _mecabraWrapper;
}

@property (nonatomic, retain) TIMecabraWrapper *mecabraWrapper;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithWordSearch:(id)arg1;
- (id)mecabraWrapper;
- (void)perform;
- (void)setMecabraWrapper:(id)arg1;

@end
