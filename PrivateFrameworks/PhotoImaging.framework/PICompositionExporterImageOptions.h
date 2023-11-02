
@interface PICompositionExporterImageOptions : PICompositionExporterOptions {
    double  _JPEGCompressionQuality;
    bool  _applyImageOrientationAsMetadata;
    bool  _enableHDR;
    NUImageExportFormat * _imageExportFormat;
    id /* block */  _metadataProcessor;
    bool  _optimizeForBackgroundProcessing;
    bool  _optimizeForSharing;
}

@property double JPEGCompressionQuality;
@property bool applyImageOrientationAsMetadata;
@property bool enableHDR;
@property (copy) NUImageExportFormat *imageExportFormat;
@property (copy) id /* block */ metadataProcessor;
@property bool optimizeForBackgroundProcessing;
@property bool optimizeForSharing;

- (void).cxx_destruct;
- (double)JPEGCompressionQuality;
- (bool)applyImageOrientationAsMetadata;
- (bool)enableHDR;
- (id)imageExportFormat;
- (id)imageExportFormatForURL:(id)arg1 isHDR:(bool)arg2;
- (id)init;
- (id /* block */)metadataProcessor;
- (bool)optimizeForBackgroundProcessing;
- (bool)optimizeForSharing;
- (void)setApplyImageOrientationAsMetadata:(bool)arg1;
- (void)setEnableHDR:(bool)arg1;
- (void)setImageExportFormat:(id)arg1;
- (void)setJPEGCompressionQuality:(double)arg1;
- (void)setMetadataProcessor:(id /* block */)arg1;
- (void)setOptimizeForBackgroundProcessing:(bool)arg1;
- (void)setOptimizeForSharing:(bool)arg1;

@end
