
@interface AXLTTranscribedDataReceiver : NSObject {
    id /* block */  _audioInfoBlock;
    id /* block */  _callbackBlock;
    long long  _requestType;
    int  _targetPID;
}

@property (readonly) id /* block */ audioInfoBlock;
@property (readonly) id /* block */ callbackBlock;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) int targetPID;

- (void).cxx_destruct;
- (id /* block */)audioInfoBlock;
- (id /* block */)callbackBlock;
- (id)initWithRequestType:(long long)arg1 targetPID:(int)arg2 handler:(id /* block */)arg3 audioInfoBlock:(id /* block */)arg4;
- (long long)requestType;
- (int)targetPID;

@end
