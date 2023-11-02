
@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation {
    HDCloudSyncOperation * _operation;
    id /* block */  _shouldRunHandler;
}

@property (retain) HDCloudSyncOperation *operation;
@property (copy) id /* block */ shouldRunHandler;

+ (bool)shouldLogAtOperationEnd;
+ (bool)shouldLogAtOperationStart;
+ (bool)shouldProduceOperationAnalytics;

- (void).cxx_destruct;
- (id)description;
- (bool)finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 operation:(id)arg3 shouldRunHandler:(id /* block */)arg4;
- (void)main;
- (id)operation;
- (void)setOperation:(id)arg1;
- (void)setShouldRunHandler:(id /* block */)arg1;
- (id /* block */)shouldRunHandler;
- (void)skip;

@end
