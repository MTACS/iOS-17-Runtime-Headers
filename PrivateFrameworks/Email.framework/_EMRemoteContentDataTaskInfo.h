
@interface _EMRemoteContentDataTaskInfo : NSObject <EFCancelable> {
    id /* block */  _completion;
    NSObject<OS_dispatch_data> * _data;
    NSURLSessionDataTask * _dataTask;
    bool  _didCollectMetrics;
    bool  _didComplete;
    bool  _failOpen;
    bool  _isSynthetic;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCollectMetrics;
@property (nonatomic) bool didComplete;
@property (nonatomic, readonly) bool failOpen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSynthetic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completion;
- (id)data;
- (id)dataTask;
- (id)debugDescription;
- (bool)didCollectMetrics;
- (bool)didComplete;
- (bool)failOpen;
- (void)finishWithError:(id)arg1;
- (id)initWithDataTask:(id)arg1 isSynthetic:(bool)arg2 failOpen:(bool)arg3 completion:(id /* block */)arg4;
- (bool)isSynthetic;
- (void)receiveData:(id)arg1;
- (void)setDidCollectMetrics:(bool)arg1;
- (void)setDidComplete:(bool)arg1;

@end
