
@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation {
    TILanguageModelAdaptationContext * _adaptationContext;
    TIMecabraWrapper * _mecabraWrapper;
}

@property (nonatomic, copy) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, retain) TIMecabraWrapper *mecabraWrapper;

- (void).cxx_destruct;
- (id)adaptationContext;
- (void)cancel;
- (id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2;
- (id)mecabraWrapper;
- (void)perform;
- (void)setAdaptationContext:(id)arg1;
- (void)setMecabraWrapper:(id)arg1;

@end
