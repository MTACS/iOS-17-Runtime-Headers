
@interface VMOperation : NSOperation {
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)configureProgressWithUnitCount:(long long)arg1;
- (id)init;
- (void)performSynchronousBlock:(id /* block */)arg1;
- (id)progress;
- (id)queue;
- (void)setProgress:(id)arg1;

@end
