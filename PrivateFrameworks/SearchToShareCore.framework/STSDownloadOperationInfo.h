
@interface STSDownloadOperationInfo : NSObject {
    NSMutableArray * _beginBlocks;
    NSMutableArray * _completionBlocks;
    NSOperation * _operation;
    NSMutableArray * _progressBlocks;
}

@property (nonatomic, readonly, copy) NSArray *completionBlocks;
@property (nonatomic, readonly) NSOperation *operation;
@property (nonatomic, readonly, copy) NSArray *progressBlocks;

- (void).cxx_destruct;
- (void)addBegin:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (void)addProgress:(id /* block */)arg1;
- (id)beginBlocks;
- (id)completionBlocks;
- (id)initWithOperation:(id)arg1 begin:(id /* block */)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)operation;
- (id)progressBlocks;

@end
