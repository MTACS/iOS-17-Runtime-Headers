
@interface RPBroadcastMP4ClipHandler : RPBroadcastHandler

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration:(id)arg1 error:(id)arg2;
- (void)processMP4ClipWithURL:(id)arg1 setupInfo:(id)arg2 finished:(bool)arg3;

@end
