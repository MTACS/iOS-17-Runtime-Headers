
@protocol AXLTTranscriberProtocol <NSObject>

@required

- (bool)isTranscribing;
- (void)resetTranscription;
- (void)setIsTranscribing:(bool)arg1;
- (bool)startTranscription:(id*)arg1;
- (bool)stopTranscription:(id*)arg1;

@end
