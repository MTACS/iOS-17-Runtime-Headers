
@interface OITSUProgressStage : NSObject {
    OITSUProgressContext * m_context;
    double  m_currentPosition;
    double  m_nextSubStageParentSize;
    OITSUProgressStage * m_parentStage;
    double  m_startInParent;
    double  m_stepsInParent;
    double  m_totalSteps;
}

- (void)advanceProgress:(double)arg1;
- (double)currentPosition;
- (void)dealloc;
- (id)description;
- (void)end;
- (id)initRootStageInContext:(id)arg1;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (double)nextSubStageParentSize;
- (double)overallProgress;
- (id)parentStage;
- (void)setNextSubStageParentSize:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressPercentage:(double)arg1;

@end
