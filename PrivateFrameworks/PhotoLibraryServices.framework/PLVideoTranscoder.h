
@interface PLVideoTranscoder : NSObject

+ (id)generatePosterFrameForAVAsset:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
+ (id)generatePosterFrameForVideoAtURL:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
+ (void)transcodeVideo:(id)arg1 outputURL:(id)arg2 presetName:(id)arg3 outputFileType:(id)arg4 metadata:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)transcodeVideoWithObjectBuilder:(id)arg1 outputURL:(id)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 presetName:(id)arg5 outputFileType:(id)arg6 metadata:(id)arg7 completionHandler:(id /* block */)arg8;

@end
