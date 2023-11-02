
@interface TCProgressStage : NSObject {
    TCProgressContext * m_context;
    double  m_currentPosition;
    NSString * m_name;
    TCProgressStage * m_parentStage;
    double  m_stepsInParent;
    double  m_totalSteps;
}

- (void).cxx_destruct;
- (void)advanceProgress:(double)arg1;
- (double)currentPosition;
- (void)dealloc;
- (void)end;
- (id)initBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (id)initRootStageInContext:(id)arg1;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 inContext:(id)arg4;
- (id)parentStage;
- (void)setProgress:(double)arg1;

@end
