
@protocol AXLTTranscriberDelegateProtocol <NSObject>

@required

- (void)audioInfoData:(AXLTAudioInfo *)arg1;
- (void)transcriberOutputData:(AXLTTranscribedData *)arg1;

@end
