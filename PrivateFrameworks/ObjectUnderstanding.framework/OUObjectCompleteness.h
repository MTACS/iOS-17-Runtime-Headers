
@interface OUObjectCompleteness : NSObject

- (bool)checkBoxFaceCompleteness:(struct box3d { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[8]; })arg1 faceIndex:(int)arg2 boxType:(id)arg3 pointCloud:(id)arg4;
- (bool)isPointInCameraView:(void *)arg1 cameraPose:(void *)arg2 camera:(void *)arg3 marginRatio:(void *)arg4; // needs 4 arg types, found 3: struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, id, float
- (void)updateRawCornersStatus:(id)arg1 withOldObjects:(id)arg2 cameraPose:(struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 camera:(id)arg4;
- (void)updateRawCornersStatusNoTimer:(id)arg1 withOldObjects:(id)arg2 cameraPose:(struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 camera:(id)arg4;
- (void)updateRawFacesStatus:(id)arg1 withOldObjects:(id)arg2 pointCloud:(id)arg3 cameraPose:(struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 camera:(id)arg5;

@end
