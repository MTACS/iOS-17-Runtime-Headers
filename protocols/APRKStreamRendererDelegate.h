
@protocol APRKStreamRendererDelegate <NSObject>

@optional

- (void)didChangeStreamRendererModeTo:(unsigned long long)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)didUpdateMetadata:(APRKMetadata *)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)handleSenderUIEvent:(NSData *)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)recordingSessionDidFailForRenderer:(APRKStreamRenderer *)arg1;
- (void)shouldHidePasscodePromptForRenderer:(APRKStreamRenderer *)arg1;
- (void)shouldShowPasscodePromptWithString:(NSString *)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)videoLayerOrientationDidChangeTo:(unsigned long long)arg1 forRenderer:(APRKStreamRenderer *)arg2;
- (void)videoLayerSizeDidChangeTo:(struct CGSize { double x1; double x2; })arg1 forRenderer:(APRKStreamRenderer *)arg2;

@end
