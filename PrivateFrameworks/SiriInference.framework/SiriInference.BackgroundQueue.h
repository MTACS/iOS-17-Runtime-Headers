
@interface SiriInference.BackgroundQueue : NSOperationQueue {
    void lock;
    void pauseRequests;
    void queue;
    void queueKey;
    void queueKeyValue;
}

- (void).cxx_destruct;
- (id)init;

@end
