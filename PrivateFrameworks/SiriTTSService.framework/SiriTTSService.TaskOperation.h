
@interface SiriTTSService.TaskOperation : NSOperation {
    void audioHandler;
    void delegate;
    void notification;
    void queue;
    void request;
    void workflow;
    void workflowError;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id)init;
- (void)main;

@end
