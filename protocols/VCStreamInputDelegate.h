
@protocol VCStreamInputDelegate <NSObject>

@required

- (void)didResumeStreamInput:(VCStreamInput *)arg1;
- (void)didStartStreamInput:(VCStreamInput *)arg1;
- (void)didStopStreamInput:(VCStreamInput *)arg1;
- (void)didSuspendStreamInput:(VCStreamInput *)arg1;

@end
