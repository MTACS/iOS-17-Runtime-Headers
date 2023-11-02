
@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
    NSError * _terminalError;
}

- (bool)_isDefunct;
- (void)dealloc;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)error;
- (void)finishWriting;
- (void)finishWritingWithCompletionHandler:(id /* block */)arg1;
- (void)flush;
- (void)flushSegment;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;
- (void)setFinishWritingDelegate:(id)arg1;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)status;

@end
