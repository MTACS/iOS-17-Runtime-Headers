
@interface TTSSpeechThread : NSThread {
    NSPort * _machPort;
    NSRunLoop * _threadRunLoop;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic, retain) NSObject<OS_voucher> *voucher;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)main;
- (void)setVoucher:(id)arg1;
- (void)stop;
- (id)voucher;

@end
