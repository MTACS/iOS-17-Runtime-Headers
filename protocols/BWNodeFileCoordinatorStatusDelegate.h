
@protocol BWNodeFileCoordinatorStatusDelegate <NSObject>

@required

- (void)fileCoordinator:(BWFileCoordinatorNode *)arg1 sentMarkerBufferForFileWriterAction:(NSString *)arg2 withPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 settingsID:(long long)arg4 errorCode:(int)arg5;
- (void)fileCoordinator:(BWFileCoordinatorNode *)arg1 stoppedBeforeStartedRecordingForSettings:(FigCaptureRecordingSettings *)arg2 pendingIrisMovieInfos:(NSArray *)arg3 errorCode:(int)arg4;

@end
