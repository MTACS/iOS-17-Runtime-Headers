
@interface JFXReaderWriterExportController : JFXExportController {
    PVVideoCompositing * _customCompositor;
    float  _progress;
}

@property (nonatomic, retain) PVVideoCompositing *customCompositor;
@property (nonatomic) float progress;

- (void).cxx_destruct;
- (void)JFX_continueExportForNextPreset;
- (id)JFX_videoCompressionSettingsFromAssistant:(id)arg1;
- (struct CGSize { double x1; double x2; })applyCompositionAspectRatioToAVPresetSize:(struct CGSize { double x1; double x2; })arg1 compositionSize:(struct CGSize { double x1; double x2; })arg2;
- (id)audioCompressionSettings;
- (void)cancelExportWithStatus:(long long)arg1;
- (void)continueExportAfterDelay;
- (id)customCompositor;
- (id)fileTypeFromExtension;
- (long long)mapAssetReaderStatusToExportStatus:(long long)arg1;
- (long long)mapAssetWriterStatusToExportStatus:(long long)arg1;
- (float)progress;
- (void)setCustomCompositor:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(id /* block */)arg8;
- (void)updateSessionProgress:(id)arg1;
- (void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2;
- (id)videoCompressionSettings:(struct CGSize { double x1; double x2; })arg1;
- (id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1;

@end
