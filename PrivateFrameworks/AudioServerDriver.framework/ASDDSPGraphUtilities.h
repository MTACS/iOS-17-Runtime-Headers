
@interface ASDDSPGraphUtilities : NSObject

+ (struct optional<AudioCapturerOptions> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })getCapturerOptions:(long long)arg1;
+ (bool)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id*)arg3;
+ (bool)startRecordingAllBoxesInGraph:(id)arg1 fromStream:(id)arg2 toDirectory:(id)arg3 withType:(long long)arg4 error:(id*)arg5;
+ (bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 fromStream:(id)arg3 toDirectory:(id)arg4 withType:(long long)arg5 andMode:(long long)arg6 error:(id*)arg7;
+ (bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 fromStream:(id)arg3 toDirectory:(id)arg4 withType:(long long)arg5 error:(id*)arg6;
+ (bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4;
+ (bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 withMode:(long long)arg4 error:(id*)arg5;
+ (bool)stopInjectingBoxesInGraph:(id)arg1;
+ (bool)stopRecordingBoxesInGraph:(id)arg1;

@end
