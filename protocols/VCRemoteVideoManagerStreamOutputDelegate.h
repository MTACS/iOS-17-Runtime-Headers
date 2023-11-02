
@protocol VCRemoteVideoManagerStreamOutputDelegate <NSObject>

@required

- (void)didDegrade:(bool)arg1;
- (void)didInvalidate;
- (void)didPause:(bool)arg1;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)didStall:(bool)arg1;
- (void)didSuspend:(bool)arg1;
- (void)didUpdateAttachments:(struct __CFDictionary { }*)arg1;
- (int)processID;
- (long long)streamToken;

@end
