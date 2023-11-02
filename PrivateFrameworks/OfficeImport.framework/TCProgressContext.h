
@interface TCProgressContext : NSObject {
    TCProgressStage * m_currentStage;
    NSDate * m_lastReportTime;
    OITSUProgressContext * m_parentProgressContext;
    NSMutableArray * m_stackOfBranches;
}

+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)advanceProgress:(double)arg1;
+ (void)advanceProgressInContext:(id)arg1 progress:(double)arg2;
+ (id)contextForCurrentThread;
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (double)currentPosition;
+ (void)endBranch:(id)arg1;
+ (void)endStage;
+ (void)popBranch;
+ (void)pushBranch:(id)arg1;
+ (void)removeContextForCurrentThread;
+ (void)removeProgressObserver:(id)arg1;
+ (void)setMessage:(id)arg1;
+ (void)setProgress:(double)arg1;
+ (id)stageForCurrentThread;

- (void).cxx_destruct;
- (id)currentStage;
- (void)dealloc;
- (id)initWithParentContext:(id)arg1;
- (void)reportProgress:(double)arg1;
- (id)rootStage;

@end
