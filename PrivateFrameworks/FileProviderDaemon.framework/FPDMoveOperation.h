
@interface FPDMoveOperation : FPDActionOperation {
    FPDActionOperationQueue * _queue;
    FPDMoveReader * _reader;
    FPDMoveWriter * _writer;
}

@property (nonatomic, readonly) FPMoveInfo *info;

+ (bool)_validateInfo:(id)arg1;

- (void).cxx_destruct;
- (void)_t_unblockReader;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (void)main;
- (id)moveInfo;
- (void)sendPastUpdatesToClient:(id)arg1;

@end
