
@interface HFCameraClipExporter : NSObject

+ (id)_exportableCameraName:(id)arg1;
+ (double)durationOfCachedRecordingForCameraClip:(id)arg1;
+ (bool)hasCachedRecordingForCameraClip:(id)arg1;
+ (id)userFriendlyExportURLForCameraName:(id)arg1 withStartDate:(id)arg2;

@end
