
@interface CVNLPCaptionModelBase : CVNLPModelBase {
    CVNLPCaptionRuntimeParameters * _runTimeParams;
}

@property (nonatomic, readonly) CVNLPCaptionRuntimeParameters *runTimeParams;

- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1 runTimeParams:(id)arg2;
- (id)runTimeParams;

@end
