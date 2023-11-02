
@interface CAMCaptureRequestInfo : NSObject {
    NSMutableArray * __receivedCallbacks;
    unsigned long long  __userInitiationTime;
    CAMStillImageCaptureRequest * _request;
}

@property (nonatomic, readonly) NSMutableArray *_receivedCallbacks;
@property (nonatomic, readonly) unsigned long long _userInitiationTime;
@property (nonatomic, readonly) NSArray *callbackReceipts;
@property (nonatomic, readonly) CAMStillImageCaptureRequest *request;

- (void).cxx_destruct;
- (id)_receivedCallbacks;
- (unsigned long long)_userInitiationTime;
- (id)callbackReceipts;
- (void)didReceiveCallback:(long long)arg1 atAbsoluteTime:(unsigned long long)arg2;
- (id)initWithRequest:(id)arg1;
- (id)request;

@end
