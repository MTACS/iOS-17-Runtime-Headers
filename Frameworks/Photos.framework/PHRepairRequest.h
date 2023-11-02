
@interface PHRepairRequest : PHMediaRequest {
    NSSet * _errorCodes;
    PLProgressFollower * _progressFollower;
    PHAssetResource * _resource;
}

@property (nonatomic, readonly) NSSet *errorCodes;
@property (nonatomic, readonly) PHAssetResource *resource;

- (void).cxx_destruct;
- (id)_sendRepairRequestWithReply:(id /* block */)arg1;
- (void)dealloc;
- (id)errorCodes;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 assetResource:(id)arg6 errorCodes:(id)arg7 delegate:(id)arg8;
- (bool)isSynchronous;
- (id)resource;
- (void)startRequest;

@end
