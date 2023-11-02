
@interface AVTSectionItemTransition : AVTTransition {
    <AVTSectionItemTransitionModel> * _sectionItemTransitionModel;
}

@property (nonatomic, readonly) <AVTSectionItemTransitionModel> *sectionItemTransitionModel;

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 animated:(bool)arg2 setupHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4 logger:(id)arg5;
- (id)model;
- (void)performTransition;
- (id)sectionItemTransitionModel;

@end
