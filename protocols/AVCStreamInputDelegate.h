
@protocol AVCStreamInputDelegate <NSObject>

@optional

- (void)didResumeStreamInput:(AVCStreamInput *)arg1;
- (void)didStartStreamInput:(AVCStreamInput *)arg1;
- (void)didStopStreamInput:(AVCStreamInput *)arg1;
- (void)didSuspendStreamInput:(AVCStreamInput *)arg1;
- (void)serverDidDie;

@end
