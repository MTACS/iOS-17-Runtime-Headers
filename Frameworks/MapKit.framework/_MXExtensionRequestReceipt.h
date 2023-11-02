
@interface _MXExtensionRequestReceipt : NSObject {
    id /* block */  _completion;
    NSTimer * _timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithTimeInterval:(double)arg1;
- (void)dealloc;
- (id)initWithCompletion:(id /* block */)arg1;

@end
