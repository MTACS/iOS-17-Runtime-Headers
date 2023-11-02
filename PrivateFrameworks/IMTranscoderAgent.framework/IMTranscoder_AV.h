
@interface IMTranscoder_AV : IMTranscoder

+ (id)supportedUTIs;

- (unsigned long long)_fileSizeForTransfer:(id)arg1;
- (bool)_isHEVCVideo:(id)arg1;
- (void)_transcodeVideoAsync:(id)arg1 target:(long long)arg2 maxBytes:(unsigned long long)arg3 isAnimojiV2:(bool)arg4 removeAlpha:(bool)arg5 preserveHDR:(bool)arg6 isAA:(bool)arg7 preserveAA:(bool)arg8 userInfo:(id)arg9 completionHandler:(id /* block */)arg10;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 commonCapabilities:(id)arg7;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 isAnimojiV2:(bool)arg6 removeAlpha:(bool)arg7 isHDR:(bool)arg8 preserveHDR:(bool)arg9 isAA:(bool)arg10 preserveAA:(bool)arg11 fileSizeLimit:(unsigned long long)arg12;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 commonCapabilities:(id)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 isLQMEnabled:(bool)arg10 completionBlock:(id /* block */)arg11;

@end
