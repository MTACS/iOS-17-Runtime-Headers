
@protocol HUCameraActivityZoneCanvasDelegate <NSObject>

@required

- (void)didAttemptToAddOverlappingLineForCanvas:(HUCameraActivityZoneCanvasView *)arg1;
- (void)didAttemptToCreateOverlappingZoneForCanvas:(HUCameraActivityZoneCanvasView *)arg1;
- (void)didAttemptToMovePointToOverlapZoneForCanvas:(HUCameraActivityZoneCanvasView *)arg1;
- (void)didUpdateActivityZone:(NSMutableArray *)arg1;
- (void)didUpdateActivityZoneCanvas:(HUCameraActivityZoneCanvasView *)arg1;

@end
