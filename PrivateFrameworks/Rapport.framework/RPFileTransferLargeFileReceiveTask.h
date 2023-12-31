
@interface RPFileTransferLargeFileReceiveTask : NSObject {
    int  _fileFD;
    RPFileTransferItem * _fileItem;
    NSObject<OS_dispatch_queue> * _queue;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _sha256Ctx;
    unsigned long long  _taskID;
}

@property (nonatomic) int fileFD;
@property (nonatomic, retain) RPFileTransferItem *fileItem;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskID;

- (void).cxx_destruct;
- (int)fileFD;
- (id)fileItem;
- (id)queue;
- (void)setFileFD:(int)arg1;
- (void)setFileItem:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTaskID:(unsigned long long)arg1;
- (unsigned long long)taskID;

@end
