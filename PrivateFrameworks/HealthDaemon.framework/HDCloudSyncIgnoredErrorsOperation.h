
@interface HDCloudSyncIgnoredErrorsOperation : HDCloudSyncOperation {
    HDCloudSyncOperation * _operation;
}

@property (retain) HDCloudSyncOperation *operation;

+ (bool)shouldLogAtOperationEnd;
+ (bool)shouldLogAtOperationStart;
+ (bool)shouldProduceOperationAnalytics;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 operation:(id)arg3;
- (void)main;
- (id)operation;
- (void)setOperation:(id)arg1;
- (void)skip;

@end
