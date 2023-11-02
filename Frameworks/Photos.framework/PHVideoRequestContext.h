
@interface PHVideoRequestContext : PHMediaRequestContext {
    long long  _intent;
    NSProgress * _progress;
    PHVideoRequestOptions * _videoOptions;
}

@property (nonatomic, readonly) long long intent;
@property (nonatomic, readonly) PHVideoRequestOptions *videoOptions;

- (void).cxx_destruct;
- (id)_lazyProgress;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(id /* block */)arg7;
- (id)initialRequests;
- (long long)intent;
- (bool)isNetworkAccessAllowed;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id /* block */)progressHandler;
- (id)progresses;
- (bool)representsShareableHighQualityResource;
- (long long)type;
- (id)videoOptions;

@end
