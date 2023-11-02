
@interface IMTranscoder : NSObject

+ (bool)shouldPreserveAAEncoding:(id)arg1;
+ (bool)shouldPreserveHDREncoding:(id)arg1;
+ (bool)shouldUseHEIFEncoding:(id)arg1 sourceUTI:(id)arg2;
+ (id)supportedUTIs;
+ (bool)supportsUTI:(id)arg1;

- (bool)boolFromTranscoderUserInfo:(id)arg1 withKey:(id)arg2;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 commonCapabilities:(id)arg7;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 isLQMEnabled:(bool)arg10 completionBlock:(id /* block */)arg11;
- (bool)transcodeProcessingRequired:(long long)arg1;

@end
