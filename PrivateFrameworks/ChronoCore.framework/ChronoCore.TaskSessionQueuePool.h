
@interface ChronoCore.TaskSessionQueuePool : NSObject {
    void _queuePool;
    void hasFaultedForExcessSize;
    void maxPoolSize;
}

- (void).cxx_destruct;
- (id)init;

@end
