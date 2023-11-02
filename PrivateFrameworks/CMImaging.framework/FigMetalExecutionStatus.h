
@interface FigMetalExecutionStatus : NSObject {
    int  _completedCommandBuffersCount;
    NSMutableArray * _failedCommandBuffers;
    unsigned long long  _status;
}

@property (nonatomic) int completedCommandBuffersCount;
@property (nonatomic, retain) NSMutableArray *failedCommandBuffers;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (int)completedCommandBuffersCount;
- (id)failedCommandBuffers;
- (id)init;
- (void)setCompletedCommandBuffersCount:(int)arg1;
- (void)setFailedCommandBuffers:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
