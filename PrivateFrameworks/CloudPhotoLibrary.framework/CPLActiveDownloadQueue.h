
@interface CPLActiveDownloadQueue : NSObject {
    bool  _FIFOQueue;
    long long  _coalescingInterval;
    id /* block */  _groupConstructor;
    unsigned long long  _maximumBatchSize;
    unsigned long long  _maximumConcurrentTransportTasks;
    NSString * _name;
    NSMutableArray * _transferTasks;
    NSMutableArray * _transportTasks;
    unsigned long long  _type;
}

@property (getter=isFIFOQueue, nonatomic, readonly) bool FIFOQueue;
@property (nonatomic, readonly) NSArray *allTransferTasks;
@property (nonatomic, readonly) long long coalescingInterval;
@property (nonatomic, readonly) unsigned long long countOfTransferTasks;
@property (nonatomic, readonly) unsigned long long countOfTransferTasksInTransportTasks;
@property (nonatomic, readonly) unsigned long long countOfTransportTasks;
@property (nonatomic, readonly) id /* block */ groupConstructor;
@property (nonatomic, readonly) bool isHighPriority;
@property (nonatomic, readonly) unsigned long long maximumBatchSize;
@property (nonatomic, readonly) unsigned long long maximumConcurrentTransportTasks;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)addTransferTask:(id)arg1;
- (void)addTransportTask:(id)arg1;
- (id)allTransferTasks;
- (long long)coalescingInterval;
- (unsigned long long)countOfTransferTasks;
- (unsigned long long)countOfTransferTasksInTransportTasks;
- (unsigned long long)countOfTransportTasks;
- (id)dequeueBatchOfTransferTasksDequeuedSize:(unsigned long long*)arg1;
- (id)dequeueLastTransportTask;
- (id /* block */)groupConstructor;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 FIFOQueue:(bool)arg3 maximumBatchSize:(unsigned long long)arg4 maximumConcurrentTransportTasks:(unsigned long long)arg5 coalescingInterval:(long long)arg6 groupConstructor:(id /* block */)arg7;
- (bool)isFIFOQueue;
- (bool)isHighPriority;
- (unsigned long long)maximumBatchSize;
- (unsigned long long)maximumConcurrentTransportTasks;
- (id)name;
- (void)removeAllTransferTasks;
- (void)removeTransferTask:(id)arg1;
- (void)removeTransportTask:(id)arg1;
- (id)status;
- (unsigned long long)type;

@end
