
@protocol VCAudioIOControllerDelegate <VCBasebandCodecNotifications, VCServerDelegate>

@required

- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)didResume;
- (void)didStart:(bool)arg1 error:(NSError *)arg2;
- (void)didStop:(bool)arg1 error:(NSError *)arg2;
- (void)didSuspend;

@end
