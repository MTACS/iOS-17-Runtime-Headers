
@interface ECS.DispatchApplyScheduler : ECS.Scheduler {
    void currentStageIndex;
    void currentStep;
    void inFlightJobGroups;
    void inFlightJobs;
    void jobPickingCount;
    void jobPickingFailedCount;
    void jobPickingIterationCount;
    void jobPickingSkipCount;
    void lastNonActionableStep;
    void sema;
}

@end
