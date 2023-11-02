
@protocol BWNodeFileWriterStatusDelegate <NSObject>

@required

- (void)fileWriter:(BWFileSinkNode *)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(BWFileSinkNode *)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(BWFileSinkNode *)arg1 startedRecordingForSettings:(FigCaptureRecordingSettings *)arg2 writerPipelineIndex:(unsigned long long)arg3;
- (void)fileWriter:(BWFileSinkNode *)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(FigCaptureRecordingSettings *)arg3 withError:(int)arg4 thumbnailSurface:(struct __IOSurface { }*)arg5 irisMovieInfo:(BWIrisMovieInfo *)arg6 debugMetadataSidecarFileURL:(NSURL *)arg7 recordingSucceeded:(bool)arg8;
- (void)fileWriter:(BWFileSinkNode *)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3;

@end
