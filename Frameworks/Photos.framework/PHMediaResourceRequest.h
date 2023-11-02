
@interface PHMediaResourceRequest : PHMediaRequest <PHAssetResourceRequestDelegate> {
    NSMutableData * _compositeData;
    PHMediaResourceResult * _dataResult;
    long long  _downloadIntent;
    long long  _downloadPriority;
    PHAssetResourceRequest * _internalRequest;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    PHAssetResource * _resource;
    bool  _synchronous;
    bool  _wantsURLOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) PHAssetResource *resource;
@property (nonatomic, readonly) long long resourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsURLOnly;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_handleDidFindFileURL:(id)arg1;
- (void)_receiveAssetResourceDataPart:(id)arg1;
- (void)_reportProgress:(double)arg1;
- (void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (id)description;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 assetResource:(id)arg6 networkAccessAllowed:(bool)arg7 downloadIntent:(long long)arg8 downloadPriority:(long long)arg9 wantsURLOnly:(bool)arg10 synchronous:(bool)arg11 delegate:(id)arg12;
- (bool)isSynchronous;
- (id /* block */)progressHandler;
- (id)resource;
- (long long)resourceType;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)startRequest;
- (bool)wantsURLOnly;

@end
