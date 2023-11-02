
@interface FPThreadedCopier : NSObject {
    NSObject<OS_dispatch_semaphore> * _bufferLimitSemaphore;
    NSMutableArray * _buffers;
    long long  _numberOfInflightCopies;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *bufferLimitSemaphore;
@property (nonatomic, retain) NSMutableArray *buffers;
@property (nonatomic) long long numberOfInflightCopies;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)sharedCopier;

- (void).cxx_destruct;
- (void)beginOperation;
- (int)beginReading:(id)arg1 error:(id*)arg2;
- (int)beginWriting:(id)arg1 overwriteDestination:(bool)arg2 error:(id*)arg3;
- (id)bufferLimitSemaphore;
- (id)buffers;
- (bool)copy:(id)arg1 to:(id)arg2 overwriteDestination:(bool)arg3 progress:(id)arg4 error:(id*)arg5;
- (void)endOperation;
- (bool)finishReading:(int)arg1 writing:(int)arg2 error:(id*)arg3;
- (id)init;
- (long long)numberOfInflightCopies;
- (void)setBufferLimitSemaphore:(id)arg1;
- (void)setBuffers:(id)arg1;
- (void)setNumberOfInflightCopies:(long long)arg1;
- (void)setWriteQueue:(id)arg1;
- (id)writeQueue;

@end
