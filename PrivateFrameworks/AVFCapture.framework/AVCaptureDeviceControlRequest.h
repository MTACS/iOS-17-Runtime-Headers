
@interface AVCaptureDeviceControlRequest : NSObject {
    id /* block */  _completionBlock;
    int  _errorCode;
    int  _requestID;
}

@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic) int errorCode;
@property (nonatomic, readonly) int requestID;

+ (id)deviceControlRequestWithCompletionBlock:(id /* block */)arg1;

- (id)_initWithCompletionBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)dealloc;
- (int)errorCode;
- (int)requestID;
- (void)setErrorCode:(int)arg1;

@end
