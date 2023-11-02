
@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions {
    bool  _applyImageOrientationAsMetadata;
    bool  _applyVideoOrientationAsMetadata;
    NUImageExportFormat * _imageExportFormat;
    bool  _optimizeForBackgroundProcessing;
    NSURL * _primaryURL;
    NSString * _videoCodecType;
    NSURL * _videoComplementURL;
    NSURL * _videoPosterFrameURL;
}

@property bool applyImageOrientationAsMetadata;
@property bool applyVideoOrientationAsMetadata;
@property (copy) NUImageExportFormat *imageExportFormat;
@property bool optimizeForBackgroundProcessing;
@property (retain) NSURL *primaryURL;
@property (nonatomic, copy) NSString *videoCodecType;
@property (retain) NSURL *videoComplementURL;
@property (retain) NSURL *videoPosterFrameURL;

- (void).cxx_destruct;
- (bool)applyImageOrientationAsMetadata;
- (bool)applyVideoOrientationAsMetadata;
- (id)imageExportFormat;
- (bool)optimizeForBackgroundProcessing;
- (id)primaryURL;
- (void)setApplyImageOrientationAsMetadata:(bool)arg1;
- (void)setApplyVideoOrientationAsMetadata:(bool)arg1;
- (void)setImageExportFormat:(id)arg1;
- (void)setOptimizeForBackgroundProcessing:(bool)arg1;
- (void)setPrimaryURL:(id)arg1;
- (void)setVideoCodecType:(id)arg1;
- (void)setVideoComplementURL:(id)arg1;
- (void)setVideoPosterFrameURL:(id)arg1;
- (id)videoCodecType;
- (id)videoComplementURL;
- (id)videoPosterFrameURL;

@end
