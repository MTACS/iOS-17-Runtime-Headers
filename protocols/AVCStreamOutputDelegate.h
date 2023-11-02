
@protocol AVCStreamOutputDelegate <NSObject>

@required

- (void)streamOutput:(AVCStreamOutput *)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)streamOutputDidBecomeInvalid:(AVCStreamOutput *)arg1;
- (void)streamOutputServerDidDie:(AVCStreamOutput *)arg1;

@optional

- (void)streamOutput:(AVCStreamOutput *)arg1 didDegrade:(bool)arg2;
- (void)streamOutput:(AVCStreamOutput *)arg1 didPause:(bool)arg2;
- (void)streamOutput:(AVCStreamOutput *)arg1 didStall:(bool)arg2;
- (void)streamOutput:(AVCStreamOutput *)arg1 didSuspend:(bool)arg2;

@end
