
@interface ChronoCore.WatchdoggingTaskTracker : _TtCs12_SwiftObject {
    void _lock;
    void _lock_runningTasksCount;
    void _lock_taskService;
    void _lock_timer;
    void _shouldExitProcess;
    void didDetectStuckTaskHandler;
    void timeout;
}

@end
