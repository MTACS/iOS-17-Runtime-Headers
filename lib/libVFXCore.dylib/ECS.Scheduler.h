
@interface ECS.Scheduler : _TtCs12_SwiftObject {
    void currentJobID;
    void currentJobName;
    void dependenciesByJob;
    void enableRecording;
    void entityManager;
    void groupsToUnregister;
    void jobQueueForThisFrame;
    void liveQueryCountByJobID;
    void lock;
    void needsRescheduling;
    void needsReschedulingForThisFrame;
    void orderedRecurrentJobs;
    void pendingJobsToEnqueueForThisFrame;
    void pendingJobsToEnqueueForThisFrameOnly;
    void queriesRecordedDuringLastFrame;
    void queriesRecordedDuringThisFrame;
    void recurrentJobs;
    void schedulerEventsRecordedDuringLastFrame;
    void schedulerEventsRecordedDuringThisFrame;
    void simulationTimeScale;
}

@end
