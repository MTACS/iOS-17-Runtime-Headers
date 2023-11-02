
@interface RPFileTransferSmallFilesTask : NSObject {
    NSMutableArray * _fileItems;
    bool  _needsRetry;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _taskID;
}

@property (nonatomic, retain) NSMutableArray *fileItems;
@property (nonatomic) bool needsRetry;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskID;

- (void).cxx_destruct;
- (id)fileItems;
- (bool)needsRetry;
- (id)queue;
- (void)setFileItems:(id)arg1;
- (void)setNeedsRetry:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTaskID:(unsigned long long)arg1;
- (unsigned long long)taskID;

@end
