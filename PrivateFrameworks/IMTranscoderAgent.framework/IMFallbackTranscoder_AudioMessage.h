
@interface IMFallbackTranscoder_AudioMessage : NSObject

- (void)_failWithOSStatusErrorCode:(int)arg1 description:(id)arg2 completion:(id /* block */)arg3;
- (id)_tmpOutputFileURL;
- (void)transcodeOpusFile:(id)arg1 completionBlock:(id /* block */)arg2;

@end
