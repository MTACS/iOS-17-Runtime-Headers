
@interface PHSingleMediaRequestContext : PHMediaRequestContext {
    bool  _networkAccessAllowed;
    NSProgress * _progress;
    id /* block */  _progressHandler;
    PHMediaRequest * _request;
    long long  _type;
}

@property (nonatomic, retain) PHMediaRequest *request;

+ (long long)_indexOfAvProxyFromResources:(id)arg1 hasAdjustments:(bool)arg2 version:(long long)arg3;
+ (id)avProxyRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
+ (id)originalAdjustmentDataRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_lazyProgress;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 type:(long long)arg5 networkAccessAllowed:(bool)arg6 progressHandler:(id /* block */)arg7 resultHandler:(id /* block */)arg8;
- (id)initialRequests;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id /* block */)progressHandler;
- (id)progresses;
- (id)request;
- (void)setRequest:(id)arg1;
- (long long)type;

@end
