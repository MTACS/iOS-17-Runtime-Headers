
@interface PHImportBatch : NSObject {
    NSMutableArray * _records;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSDate * _start;
    PHImportTimerCollection * _timers;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSMutableArray *records;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, readonly) PHImportTimerCollection *timers;

- (void).cxx_destruct;
- (double)duration;
- (id)init;
- (id)records;
- (id)semaphore;
- (id)timers;

@end
